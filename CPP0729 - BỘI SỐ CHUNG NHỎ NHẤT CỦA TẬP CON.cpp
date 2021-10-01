// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define endl '\n'

const int MAX_N = 105;
const int MOD = 10007;

struct element
{
    int p2, p3, p5, p7, p11, p13, p17, p19;
    int rest;
    bool operator < (const element &other)
    {
        return rest < other.rest;
    }
};

int t, n;
int dp[MAX_N][9][6][4][4][3][3][3][3][2];
int a[MAX_N];
int listPrime[8] = {2, 3, 5, 7, 11, 13, 17, 19};

vector <element> save;

int POW(int x, int n)
{
    int ret = 1;
    FOR(i, 1, n) (ret *= x) %= MOD;
    return ret;
}

int calc(int &n, int x)
{
    
    int ret = 0;
    while(!(n % x))
    {
        ++ret;
        n /= x;
    }
    return ret;
}

int main()
{
    faster();
    cin >> t;
    int cnt = 1;
    while(t--)
    {
        cin >> n;
        FOR(i, 1, n) cin >> a[i];
        save.clear();
        FOR(i, 1, n)
        {
            int p2 = calc(a[i], 2);
            int p3 = calc(a[i], 3);
            int p5 = calc(a[i], 5);
            int p7 = calc(a[i], 7);
            int p11 = calc(a[i], 11);
            int p13 = calc(a[i], 13);
            int p17 = calc(a[i], 17);
            int p19 = calc(a[i], 19);
            int rest = a[i];
            save.pb((element) {p2, p3, p5, p7, p11, p13, p17, p19, rest});
        }
        save.pb((element) {0, 0, 0, 0, 0, 0, 0, 0, -1});
        sort(save.begin(), save.end());
        memset(dp, 0, sizeof(dp));
        dp[0][0][0][0][0][0][0][0][0][0] = 1;
        for (int i = 0; i < n; i++)
        FOR(p2, 0, 8)
        FOR(p3, 0, 5)
        FOR(p5, 0, 3)
        FOR(p7, 0, 3)
        FOR(p11, 0, 2)
        FOR(p13, 0, 2)
        FOR(p17, 0, 2)
        FOR(p19, 0, 2)
        FOR(have, 0, 1)
        {
            if(!dp[i][p2][p3][p5][p7][p11][p13][p17][p19][have]) continue;
            int currentValue = dp[i][p2][p3][p5][p7][p11][p13][p17][p19][have];
            if(save[i].rest == save[i + 1].rest) (dp[i + 1][p2][p3][p5][p7][p11][p13][p17][p19][have] += currentValue) %= MOD;
            else (dp[i + 1][p2][p3][p5][p7][p11][p13][p17][p19][0] += currentValue) %= MOD;
            element e = save[i + 1];
            int newp2 = max(p2, e.p2);
            int newp3 = max(p3, e.p3);
            int newp5 = max(p5, e.p5);
            int newp7 = max(p7, e.p7);
            int newp11 = max(p11, e.p11);
            int newp13 = max(p13, e.p13);
            int newp17 = max(p17, e.p17);
            int newp19 = max(p19, e.p19);
            if (save[i].rest == save[i + 1].rest)
            {
                if (have == 0) (dp[i + 1][newp2][newp3][newp5][newp7][newp11][newp13][newp17][newp19][1] += (save[i + 1].rest * currentValue) % MOD) %= MOD;
                else (dp[i + 1][newp2][newp3][newp5][newp7][newp11][newp13][newp17][newp19][1] += currentValue) %= MOD;
            }
            else (dp[i + 1][newp2][newp3][newp5][newp7][newp11][newp13][newp17][newp19][1] += (save[i + 1].rest * currentValue) % MOD) %= MOD;
        }
        int ans = 0;
        FOR(p2, 0, 8)
        FOR(p3, 0, 5)
        FOR(p5, 0, 3)
        FOR(p7, 0, 3)
        FOR(p11, 0, 2)
        FOR(p13, 0, 2)
        FOR(p17, 0, 2)
        FOR(p19, 0, 2)
        FOR(have, 0, 1)
        {
            int ways = dp[n][p2][p3][p5][p7][p11][p13][p17][p19][have];
            if (p2 + p3 + p5 + p7 + p11 + p13 + p17 + p19 + have == 0)
            {
                --ways;
                if (ways < 0) ways += MOD;
            }
            int value = 1;
            (value *= POW(2, p2)) %= MOD;
            (value *= POW(3, p3)) %= MOD;
            (value *= POW(5, p5)) %= MOD;
            (value *= POW(7, p7)) %= MOD;
            (value *= POW(11, p11)) %= MOD;
            (value *= POW(13, p13)) %= MOD;
            (value *= POW(17, p17)) %= MOD;
            (value *= POW(19, p19)) %= MOD;
            (value *= ways) %= MOD;
            (ans += value) %= MOD;
        }
        cout << "Case " << cnt++ << ": " << ans << endl;
    }
    return 0;
}

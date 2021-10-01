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

long calc(int n, string s)
{
    int len = s.length() - 1;
    const int Sz1 = len;
    const int Sz2 = n;
    long dp[Sz1 + 5][Sz2 + 5] = {};
    ++dp[0][(s[0] - '0') % n];
    FOR(i, 1, len)
    {
        ++dp[i][(s[i] - '0') % n];
        for (int j = 0; j < n; ++j)
        {
            dp[i][j] += dp[i - 1][j];
            dp[i][((s[i] - '0') + j * 10) % n] += dp[i - 1][j];
        }
    }
    return dp[len][0];
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int m, n;
        string s;
        cin >> m >> n >> s;
        cout << calc(n, s) << endl;
    }
    return 0;
}

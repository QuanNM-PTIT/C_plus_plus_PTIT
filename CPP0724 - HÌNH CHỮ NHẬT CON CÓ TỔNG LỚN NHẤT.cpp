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
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

int calc(vi &a, int &n)
{
    int res = INT_MIN;
    int tmp = 0;
    F(i, 0, n)
    {
        tmp += a[i];
        if(tmp > res) res = tmp;
        if(tmp < 0) tmp = 0;
    }
    return res;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int m, n;
        cin >> n >> m;
        int a[n][m];
        F(i, 0, n) F(j, 0, m) cin >> a[i][j];
        int ans = INT_MIN;
        F(i, 0, n)
        {
            vi v(m);
            F(j, i, n)
            {
                F(k, 0, m) v[k] += a[j][k];
                ans = max(ans, calc(v, m));
            }
        }
        cout << ans << endl;
    }
    return 0;
}

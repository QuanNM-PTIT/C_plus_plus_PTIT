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
#define PI 3.141592653589793238
#define endl '\n'

int a[20][20];

int solve(int n, int m)
{
    F(i, 0, n) F(j, 0, m) if(i && a[i][j]) a[i][j] = a[i-1][j] + 1;
    F(i, 0, n)
    {
        vi v;
        F(j, 0, m) v.pb(a[i][j]);
        sort(v.begin(), v.end());
        F(j, 0, v.sz) a[i][j] = v[j];
    }
    int res = 0;
    F(i, 0, n)
    {
        int w = 1;
        FORD(j, m - 1, 0)
        {
            int cur = a[i][j] * w;
            ++w;
            res = max(res, cur);
        }
    }
    return res;
}

int main()
{
    faster();
    int t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        F(i, 0, n) F(j, 0, m) cin >> a[i][j];
        cout << solve(n, m) << endl;
    }
    return 0;
}

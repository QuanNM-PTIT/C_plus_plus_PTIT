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

ll m;

ll POW(ll x, ll y)
{
    if (y == 0) return 1;
    if (y == 1) return x;
    if (!(y & 1)) return POW(x * x % m, y / 2) % m;
    return x * POW(x * x % m, y / 2) % m;
}

ll comp(string &s)
{
    ll res = 0;
    int len = s.length() - 1;
    FOR(i, 0, len)
    {
        res = res * 10 + s[i] - '0';
        res %= m;
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
        string s;
        ll a, b;
        cin >> s >> b >> m;
        a = comp(s);
        cout << POW(a, b) << endl;
    }
    return 0;
}

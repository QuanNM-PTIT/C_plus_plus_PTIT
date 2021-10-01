// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

ll mod = 1000000007;

ll mulMod(ll a, ll b)
{
    a %= mod;
    b %= mod;
    if (a == 0) return 0;
    ll res = 0;
    while (a != 0)
    {
        if (a & 1)
        {
            if (b >= mod - res) res -= mod;
            res += b;
        }
        a >>= 1;
        if (b >= mod - b) b += b - mod;
        else b += b;
    }
    return res;
}

ll POW(ll a, ll b)
{
    ll c;
    if (b == 0) return 1;
    if (b == 1) return (a % mod);
    c = POW(a, b / 2) % mod;
    c = mulMod(c, c) % mod;
    if (b % 2) c = mulMod(c, a);
    return (c % mod);
}

ll ucln(ll a,ll b)
{
    if(b==0) return a;
    return ucln(b,a%b);
}

ll a[65];

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long h=1;
        for(long long i=0;i<n;i++)
        {
            cin >> a[i];
            h = (h * a[i]) % mod;
        }
        ll g = a[0];
        for(ll i = 1; i < n; i++) g = ucln(g, a[i]);
        cout << POW(h, g) << endl;
    }
    return 0;
}

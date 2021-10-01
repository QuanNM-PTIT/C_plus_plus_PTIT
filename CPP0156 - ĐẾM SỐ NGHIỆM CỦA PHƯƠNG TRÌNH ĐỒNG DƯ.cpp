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

ll solve(ll n, ll p)
{
    ll ans = 0;
    for(ll x = 1; x < p; ++x)
    {
        if((x * x) % p == 1)
        {
            ll tmp = x + p * (n / p);
            if (tmp > n) tmp -= p;
            ans += ((tmp - x) / p + 1);
        }
    }
    return ans;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        ll b, p;
        cin >> b >> p;
        cout << solve(b, p) << endl;
    }
    return 0;
}

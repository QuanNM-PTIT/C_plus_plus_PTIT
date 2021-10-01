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

ll c;

ll mulMod(ll a, ll b)
{
    if(b == 0) return 0;
    ll tmp = mulMod(a, b / 2);
    tmp = (tmp + tmp) % c;
    if(b & 1) tmp += a;
    return tmp % c;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b >> c;
        cout << mulMod(a, b) << endl;
    }
    return 0;
}

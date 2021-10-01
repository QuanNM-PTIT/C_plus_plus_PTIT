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

ll sumz = 0;
ll subz = 0;
ll n, m;
ll a, b;

ll gcd(ll a, ll b)
{
    if(!b) return a;
    return gcd(b, a % b);
}

void init()
{
    cin >> n >> m;
    subz = m;
    sumz = (n + 1) * n >> 1;
    a = (sumz + subz) >> 1;
    b = sumz - a;
}

void process()
{
    if (a << 1 != sumz + subz)
    {
        cout << "No\n";
        return;
    }
    ll tmp = gcd(a, b);
    if (tmp == 1) cout << "Yes\n";
    else cout << "No\n";
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        init();
        process();
    }
    return 0;
}

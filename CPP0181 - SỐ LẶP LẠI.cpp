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

ll gcd(ll a, ll b)
{
    if(!b) return a;
    return gcd(b, a % b);
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
        cin >> s >> a >> b;
        ll UCLN = gcd(a, b);
        F(i, 0, UCLN) cout << s;
        cout << endl;
    }
    return 0;
}

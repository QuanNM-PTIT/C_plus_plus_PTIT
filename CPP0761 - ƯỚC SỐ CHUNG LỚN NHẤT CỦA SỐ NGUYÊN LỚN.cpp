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

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b = 0;
        string s;
        cin >> a;
        cin.ignore();
        cin >> s;
        for(int i = 0; i < s.length(); ++i)
        {
            b *= 10;
            b += s[i] - '0';
            b %= a;
        }
        cout << gcd(a, b) << endl;
    }
    return 0;
}

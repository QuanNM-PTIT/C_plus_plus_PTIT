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

int t;
ll m;
string n;

ll calc()
{
    ll N = 0;
    for(int i = 0; i < n.length(); ++i)
    {
        N *= 10;
        N += n[i] - '0';
        N %= m;
    }
    return N;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin.ignore();
        cin >> n >> m;
        cout << calc() << endl;
    }
    return 0;
}

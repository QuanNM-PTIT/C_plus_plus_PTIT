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
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define endl '\n'

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll x;
        vll v;
        for(int i = 0; i < n; ++i)
        {
            cin >> x;
            if(x) v.pb(x);
        }
        for(int i = 0; i < v.sz; ++i) cout << v[i] << ' ';
        int cnt = n - v.size();
        while(cnt--) cout << 0 << ' ';
        cout << endl;
    }
    return 0;
}

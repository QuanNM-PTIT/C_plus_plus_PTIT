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
#define vb vector<bool>
#define endl '\n'

int main()
{
    faster();
    int t, x, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        set<int> s;
        FOR(i, 1, n)
        {
            cin >> x;
            s.insert(x);
        }
        if(s.sz > 1)
        {
            auto idx = s.begin();
            FOR(i, 1, 2) cout << *idx++ << ' ';
        }
        else cout << -1;
        cout << endl;
    }
    return 0;
}


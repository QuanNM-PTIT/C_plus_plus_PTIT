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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.fi < b.fi;
}

int main()
{
    faster();
    int t, n, k, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector<pair<int, int>> vp;
        FOR(i, 1, n)
        {
            cin >> x;
            vp.pb(mp(abs(x - k), x));
        }
        stable_sort(vp.begin(), vp.end(), cmp);
        for(auto i : vp) cout << i.se << ' ';
        cout << endl;
    }
    return 0;
}

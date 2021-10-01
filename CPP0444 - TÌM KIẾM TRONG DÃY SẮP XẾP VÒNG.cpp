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

int BSearch(const vector<pair<int, int>> &vp, int k)
{
    int l = 0, r = vp.sz - 1;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(vp[mid].fi == k) return vp[mid].se;
        if(vp[mid].fi < k) l = mid + 1;
        else r = mid - 1;
    }
}

int main()
{
    faster();
    int t, x, n, k;
    cin >> t;
    while(t--)
    {
        vector<pair<int, int>> vp;
        cin >> n >> k;
        FOR(i, 1, n)
        {
            cin >> x;
            vp.pb(mp(x, i));
        }
        sort(vp.begin(), vp.end());
        cout << BSearch(vp, k) << endl;;
    }
    return 0;
}


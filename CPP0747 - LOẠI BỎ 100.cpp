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

string s;

int solve()
{
    vector<pair<char, int>> vp;
    int res = 0;
    int tmp;
    F(i, 0, s.length())
    {
        vp.pb(mp(s[i], i));
        while(vp.sz >= 3 && vp[vp.sz - 1].fi == '0' && vp[vp.sz - 2].fi == '0' && vp[vp.sz - 3].fi == '1')
        {
            vp.pop_back();
            vp.pop_back();
            vp.pop_back();
        }
        tmp = vp.back().se;
        res = max(res, i - tmp);
    }
    return res;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        cout << solve() << endl;
    }
    return 0;
}

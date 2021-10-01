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
#define endl '\n

bool check(vi &v, int l, int r)
{
    int t = -1;
    F(i, l, r)
    {
        if(v[i] > v[i + 1])
        {
            t = i;
            break;
        }
    }
    if(t > -1) F(i, t, r) if(v[i] < v[i + 1]) return 0;
    return 1;
}

int main()
{
    faster();
    int t, n, x, l, r;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vi v;
        FOR(i, 1, n)
        {
            cin >> x;
            v.pb(x);
        }
        cin >> l >> r;
        if(check(v, l, r)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}

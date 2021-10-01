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

ll C(ll k, ll n)
{
    ll ans = 1;
    FOR(i, 1, k)
    {
        ans = ans * n / i;
        n--;
    }
    return ans;
}

int main()
{
    faster();
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        int dd[30] = {};
        cin >> s;
        F(i, 0, s.length()) dd[s[i] - 'a']++;
        ll cnt = s.length();
        FOR(i, 0, 29) if(dd[i] > 1) cnt += C(2, dd[i]);
        cout << cnt << endl;
    }
    return 0;
}

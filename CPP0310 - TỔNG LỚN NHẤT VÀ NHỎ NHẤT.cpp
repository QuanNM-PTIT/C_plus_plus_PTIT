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

ll minNum(string &s)
{
    int len = s.length() - 1;
    ll res = 0;
    FOR(i, 0, len)
    {
        if(s[i] == '6') res = res * 10 + 5;
        else res = res * 10 + s[i] - '0';
    }
    return res;
}

ll maxNum(string &s)
{
    int len = s.length() - 1;
    ll res = 0;
    FOR(i, 0, len)
    {
        if(s[i] == '5') res = res * 10 + 6;
        else res = res * 10 + s[i] - '0';
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
        string a, b;
        cin >> a >> b;
        cout << minNum(a) + minNum(b) << ' ' << maxNum(a) + maxNum(b) << endl;
    }
    return 0;
}

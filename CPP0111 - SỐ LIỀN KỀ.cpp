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

bool check(string &s)
{
    int len = s.length() - 2;
    FOR(i, 0, len) if(abs(s[i] - s[i + 1]) != 1) return 0;
    return 1;
}

int main()
{
    faster();
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


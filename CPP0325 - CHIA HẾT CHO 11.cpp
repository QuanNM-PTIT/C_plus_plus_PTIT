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

bool check(string &s)
{
    int tmp = 0, len = s.length() - 1;
    FOR(i, 0, len)
    {
        tmp *= 10;
        tmp += s[i] - '0';
        tmp %= 11;
    }
    return tmp == 0;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}

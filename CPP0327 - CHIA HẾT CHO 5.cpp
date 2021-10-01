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
    ll cnt = 0, len = s.length() - 1, tmp = 1;
    FORD(i, len, 0)
    {
        if(s[i] == '1')
        {
            tmp %= 5;
            cnt += tmp;
            cnt %= 5;
        }
        tmp *= 2;
    }
    return cnt;
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
        if(!check(s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

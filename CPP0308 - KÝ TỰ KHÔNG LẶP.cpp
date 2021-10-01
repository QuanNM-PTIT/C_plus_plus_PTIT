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

int main()
{
    faster();
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while(t--)
    {
        int dd[130] = {};
        getline(cin, s);
        F(i, 0, s.length()) ++dd[s[i]];
        F(i, 0, s.length()) if(dd[s[i]] == 1) cout << s[i];
        cout << endl;
    }
}

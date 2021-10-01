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

int kt(char c)
{
    char temp=tolower(c);
    if(temp=='u'||temp=='e'||temp=='o'||temp=='a'||temp=='i'||temp=='y') return 1;
    return 0;
}

int main()
{
    faster();
    string s;
    cin >> s;
    F(i, 0, s.length())
    {
        if(kt(s[i])) continue;
        cout << '.' << (char) tolower(s[i]);
    }
}


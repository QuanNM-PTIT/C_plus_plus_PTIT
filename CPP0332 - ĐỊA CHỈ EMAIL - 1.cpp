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

int main()
{
    faster();
    string s[100];
    int idx = 0;
    while(cin >> s[idx]) ++idx;
    for(int i = 0; i < idx; ++i) for(int j = 0; j < s[i].length(); ++j) s[i][j] = tolower(s[i][j]);
    cout << s[idx - 1];
    for(int i = 0; i < idx - 1; ++i) cout << s[i][0];
    cout << "@ptit.edu.vn";
    return 0;
}


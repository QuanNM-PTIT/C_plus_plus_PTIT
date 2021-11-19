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
    ifstream fin1("DATA1.in");
    ifstream fin2("DATA2.in");
    string s;
    set<string> s1, s2, s3, s4;
    while(fin1 >> s)
    {
        F(i, 0, s.sz) s[i] = tolower(s[i]);
        s1.insert(s);
        s3.insert(s);
    }
    while(fin2 >> s)
    {
        F(i, 0, s.sz) s[i] = tolower(s[i]);
        if(s1.find(s) != s1.end()) s4.insert(s);
        s3.insert(s);
    }
    for(auto i : s3) cout << i << ' ';
    cout << endl;
    for(auto i : s4) cout << i << ' ';
    return 0;
}

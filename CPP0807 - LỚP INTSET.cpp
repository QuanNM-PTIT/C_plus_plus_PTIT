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
    ifstream fin("DATA.in");
    int n, m, x;
    fin >> n >> m;
    set<int> s;
    unordered_map<int, int> um1;
    while(n--)
    {
        fin >> x;
        ++um1[x];
    }
    while(m--)
    {
        fin >> x;
        if(um1[x]) s.insert(x);
    }
    for(int i : s) cout << i << ' ';
    return 0;
}

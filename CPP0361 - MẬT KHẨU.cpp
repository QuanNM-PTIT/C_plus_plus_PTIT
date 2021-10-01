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

const int MAX = 1e5 + 5;
int n;

typedef struct Tr
{
    int c, e;
    Tr *p;
    map<int, Tr*> m;
    Tr()
    {
        c = e = 0;
        p = this;
    }
} Tr;

map<Tr*, int> myMap;
Tr* r = new Tr();
Tr* ni = new Tr();
string s[MAX];

void Add(string s)
{
    Tr* p = r;
    F(i, 0, s.sz)
    {
        if(p -> m.find(s[i] - 'a') == p -> m.end())
        {
            p -> m[s[i] - 'a'] = new Tr();
            p -> m[s[i] - 'a'] -> p = p;
            p -> c++;
        }
        p = p -> m[s[i] - 'a'];
    }
    p -> e = p -> e + 1;
}

int Calc(int t, string s)
{
    Tr* p = r;
    int rest = 0;
    F(i, t, s.length())
    {
        if(p -> m.find(s[i] - 'a') == p -> m.end()) break;
        p = p -> m[s[i] - 'a'];
        if(myMap.find(p) == myMap.end())
        {
            rest += p -> e;
            myMap[p] = 1;
        }
    }
    return rest;
}

int main()
{
    faster();
    cin >> n;
    int res = -n;
    FOR(i, 1, n)
    {
        cin >> s[i];
        Add(s[i]);
    }
    FOR(i, 1, n)
    {
        myMap.clear();
        F(j, 0, s[i].length()) res += Calc(j, s[i]);
    }
    cout << res;
    return 0;
}


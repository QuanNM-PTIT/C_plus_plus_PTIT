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
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin.ignore();
        string s, x;
        getline(cin, s);
        stringstream ss(s);
        vector<string> vs;
        while(ss >> x) vs.pb(x);
        for(int i = 0; i < vs.sz; ++i)
        {
            vs[i][0] = toupper(vs[i][0]);
            for(int j = 1; j < vs[i].length(); ++j) vs[i][j] = tolower(vs[i][j]);
        }
        if(n == 1)
        {
            cout << vs[vs.sz - 1] << ' ';
            vs.pop_back();
            for(auto i : vs) cout << i << ' ';
        }
        else
        {
            for(int i = 1; i < vs.sz; ++i) cout << vs[i] << ' ';
            cout << vs[0];
        }
        cout << endl;
    }
    return 0;
}
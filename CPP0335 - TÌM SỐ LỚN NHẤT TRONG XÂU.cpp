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
#define PI 3.141592653589793238
#define endl '\n'

bool cmp(string &a, string &b)
{
    if(a.length() > b.length()) return 1;
    if(a.length() < b.length()) return 0;
    F(i, 0, a.length())
    {
        if(a[i] > b[i]) return 1;
        if(a[i] < b[i]) return 0;
    }
}

int main()
{
	faster();
	int t;
	cin >> t;
	string s;
    while(t--)
    {
        cin >> s;
        vector<string> vs;
        string tmp = "";
        F(i, 0, s.length())
        {
            if(isdigit(s[i])) tmp += s[i];
            else
            {
                if(tmp != "")
                {
                    vs.pb(tmp);
                	tmp = "";
                }
            }
        }
        if(tmp != "") vs.pb(tmp);
        if(vs.sz > 1) sort(vs.begin(), vs.end(), cmp);
        cout << vs[0] << endl;
    }
	return 0;
}
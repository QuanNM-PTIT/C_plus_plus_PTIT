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

string add(string &a, string &b)
{
    string res = "";
    while(a.length() < b.length()) a = "0" + a;
    while(b.length() < a.length()) b = "0" + b;
    int rmb = 0;
    FORD(i, a.length() - 1, 0)
    {
        int tmp = a[i] - '0' + b[i] - '0' + rmb;
        rmb = tmp / 10;
        tmp = tmp % 10;
        res = (char)(tmp + '0') + res;
    }
    if(rmb > 0) res = "1" + res;
    return res;
}

void solve()
{
    string a,b;
    cin >> a >> b;
    cout << add(a, b) << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
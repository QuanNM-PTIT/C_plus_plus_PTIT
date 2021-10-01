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

struct ds
{
    int stt;
    string msv, name, lop, email, dn;
};

bool cmp(ds &a, ds &b)
{
    return a.name < b.name;
}

int main()
{
    faster();
    int n;
    cin >> n;
    cin.ignore();
    ds a[n];
    F(i, 0, n)
    {
        a[i].stt = i + 1;
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
        getline(cin, a[i].dn);
    }
    sort(a, a + n, cmp);
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        F(i, 0, n) if(a[i].dn == s) cout << a[i].stt << ' ' << a[i].msv << ' ' << a[i].name << ' ' << a[i].lop << ' ' << a[i].email << ' ' << a[i].dn << endl;
    }
    return 0;
}

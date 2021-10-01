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

struct dn
{
    string mdn, name;
    int amt;
};

bool cmp(dn &a, dn &b)
{
    if(a.amt == b.amt) return a.mdn < b.mdn;
    return a.amt > b.amt;
}

int main()
{
    faster();
    int n;
    cin >> n;
    dn a[n];
    F(i, 0, n)
    {
        cin.ignore();
        getline(cin, a[i].mdn);
        getline(cin, a[i].name);
        cin >> a[i].amt;
    }
    sort(a, a + n, cmp);
    F(i, 0, n) cout << a[i].mdn << ' ' << a[i].name << ' ' << a[i].amt << endl;
    return 0;
}

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

struct SV
{
    string msv, ten, lop;
    double d1, d2, d3;
};

bool cmp(SV a, SV b)
{
    return a.ten < b.ten;
}

int main()
{
    faster();
    int t;
    cin >> t;
    SV a[t];
    F(i, 0, t)
    {
        cin.ignore();
        getline(cin, a[i].msv);
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        cin >> a[i].d1 >> a[i].d2 >> a[i].d3;
    }
    sort(a, a + t, cmp);
    F(i, 0, t) cout << i + 1 << ' ' << a[i].msv << ' ' << a[i].ten << ' ' << a[i].lop << setprecision(1) << fixed << ' ' << a[i].d1 << ' ' << a[i].d2 << ' ' << a[i].d3 << endl;
    return 0;
}

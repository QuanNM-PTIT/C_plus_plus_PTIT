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

struct sv
{
    string msv, name, lop, email;
};

bool cmp(sv &a, sv &b)
{
    if(a.lop > b.lop) return 0;
    if(a.lop < b.lop) return 1;
    if(a.msv > b.msv) return 0;
    return 1;
}

int main()
{
    faster();
    int n;
    cin >> n;
    sv a[n];
    cin.ignore();
    F(i, 0, n)
    {
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
    }
    sort(a, a + n, cmp);
    F(i, 0, n) cout << a[i].msv << ' ' << a[i].name << ' ' << a[i].lop << ' ' << a[i].email << endl;
    return 0;
}

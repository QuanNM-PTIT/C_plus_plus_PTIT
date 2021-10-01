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
    return a.msv < b.msv;
}

sv a[1005];

int main()
{
    faster();
    int idx = 0;
    while(cin >> a[idx].msv)
    {
        cin.ignore();
        getline(cin, a[idx].name);
        getline(cin, a[idx].lop);
        getline(cin, a[idx].email);
        idx++;
    }
    sort(a, a + idx, cmp);
    F(i, 0, idx) cout << a[i].msv << ' ' << a[i].name << ' ' << a[i].lop << ' ' << a[i].email << endl;
    return 0;
}


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

struct Time
{
    int h, m, s;
};

bool cmp(Time a, Time b)
{
    if(a.h < b.h) return 1;
    else if(a.h > b.h) return 0;
    if(a.m < b.m) return 1;
    else if(a.m > b.m) return 0;
    if(a.s < b.s) return 1;
    else if(a.s > b.s) return 0;
    return 1;
}

int main()
{
    faster();
    int n;
    cin >> n;
    Time a[n];
    F(i, 0, n) cin >> a[i].h >> a[i].m >> a[i].s;
    sort(a, a + n, cmp);
    F(i, 0, n) cout << a[i].h << ' ' << a[i].m << ' ' << a[i].s << endl;
    return 0;
}

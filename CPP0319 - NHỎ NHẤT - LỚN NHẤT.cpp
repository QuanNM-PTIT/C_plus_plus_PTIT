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
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int m, s, rmin[105], rmax[105];

int Solve()
{
    int x = s, n = 0;
    while(x > 9)
    {
        ++n;
        rmax[n] = 9;
        x -= 9;
        if(n > m) return 0;
    }
    if (n == m && x != 0) return 0;
    if (m - n == 1)
    {
        ++n;
        rmax[n] = x;
    }
    else
    {
        ++n;
        rmax[n] = x;
        while(n < m)
        {
            ++n;
            rmax[n] = 0;
        }
    }
    x = s;
    n = 0;
    while(x > 9)
    {
        ++n;
        rmin[n] = 9;
        x -= 9;
        if(n > m) return 0;
    }
    if (n == m && x != 0) return 0;
    if (m - n == 1)
    {
        ++n;
        rmin[n] = x;
        if(!x) swap(rmin[n], rmin[n - 1]);
    }
    else
    {
        if(x == 0)
        {
            FOR(i, n, m - 1) rmin[i] = 0;
            rmin[m] = 9;
        }
        else
        {
            rmin[n + 1] = x - 1;
            FOR(i, n + 2, m - 1) rmin[i] = 0;
            rmin[m] = 1;
        }
    }
    return 1;
}

int main()
{
    faster();
    cin >> m >> s;
    if (m != 1 && s == 0)
    {
        cout << "-1 -1";
        return 0;
    }
    if (!Solve()) cout << "-1 -1";
    else
    {
        FORD(i, m, 1) cout << rmin[i];
        cout << " ";
        FOR(i, 1, m) cout << rmax[i];
    }
    return 0;
}

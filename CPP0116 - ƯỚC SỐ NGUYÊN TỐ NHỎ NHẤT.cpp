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

int t, n, a[10005];

int nPrime(int n)
{
    if(n & 2 == 0) return 2;
    double sq = sqrt(n);
    FOR(i, 2, sq) if(n % i == 0) return i;
    return n;
}

int main()
{
    faster();
    FOR(i, 1, 3) a[i] = i;
    FOR(i, 4, 10000) a[i] = nPrime(i);
    cin >> t;
    while(t--)
    {
        cin >> n;
        FOR(i, 1, n) cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}


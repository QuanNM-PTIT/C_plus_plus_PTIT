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

int main()
{
    faster();
    int N = 100005;
    vi v;
    bool check[100007];
    FOR(i, 2, N) check[i] = 1;
    FOR(i, 2, N) if(check[i]) for(int j = 2 * i; j <= N; j += i) check[j] = 0;
    FOR(i, 2, N) if(check[i]) v.pb(i);
    int t, n, s = v.sz - 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        FOR(i, 0, s)
        if(v[i] * v[i] <= n) cout << v[i] * v[i] << ' ';
        else break;
        cout << endl;
    }
    return 0;
}


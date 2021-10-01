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
#define vb vector<bool>
#define endl '\n'

int a[1000005], b[1000005];

int main()
{
    faster();
    int t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        FOR(i, 1, n) cin >> a[i];
        FOR(i, 1, m) cin >> b[i];
        sort(a + 1, a + 1 + n);
        sort(b + 1, b + 1 + m);
        cout << (ll) a[n] * b[1] << endl;
    }
    return 0;
}

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

bool cmp(string a , string b)
{
    if (a + b < b + a) return true;
    return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin() , a.end(), cmp);
    for(int i = n - 1; i >= 0; --i) cout << a[i];
    cout << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--) solve();
}

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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        ll b[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        b[0] = a[0] * a[1];
        b[n - 1] = a[n - 1] * a[n - 2];
        for(int i = 1; i < n - 1; ++i) b[i] = a[i - 1] * a[i + 1];
        for(int i = 0; i < n; ++i) cout << b[i] << ' ';
        cout << endl;
    }
    return 0;
}

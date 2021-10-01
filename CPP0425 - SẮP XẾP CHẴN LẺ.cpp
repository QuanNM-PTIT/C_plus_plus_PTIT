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
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        int index = 0;
        for(int i = 0; i < n; i += 2) b[i] = a[index++];
        for(int i = 1; i < n; i += 2) b[i] = a[index++];
        for(int i = 0; i < n; ++i) cout << b[i] << ' ';
        cout << endl;
    }
    return 0;
}

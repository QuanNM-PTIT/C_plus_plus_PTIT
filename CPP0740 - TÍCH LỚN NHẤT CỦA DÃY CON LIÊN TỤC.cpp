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
        ll maxArr = -1e18;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i)
        {
            ll tmp = 1;
            for(int j = i; j < n; ++j)
            {
                tmp *= a[j];
                maxArr = max(maxArr, tmp);
            }
        }
        cout << maxArr << endl;
    }
    return 0;
}

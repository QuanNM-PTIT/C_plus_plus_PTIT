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
#define endl '\n'

int a[105];

int main()
{
    faster();
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int cnt = 0;
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i)
        {
            int f = k - a[i];
            if(a[i] >= 0) for(int j = i + 1; j < n; ++j) if(a[j] == f) cnt++;
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}

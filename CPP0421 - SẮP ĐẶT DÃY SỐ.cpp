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
        vector<bool> a(10000007, 0);
        for(int i = 0; i < n; ++i)
        {
            ll tmp;
            cin >> tmp;
            if (tmp >= 0 && tmp < 10000001) a[tmp] = 1;
        }
        for(int i = 0; i < n; ++i)
        {
            if (a[i]) cout << i << ' ';
            else cout << -1 << ' ';
        }
        cout << endl;
    }
    return 0;
}

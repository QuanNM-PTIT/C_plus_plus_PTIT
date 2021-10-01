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
        cin >> a[0];
        if(n==1)
        {
            cout << a[0] << ' ';
            continue;
        }
        for(int i = 1; i < n; ++i)
        {
            cin >> a[i];
            if(a[i] == a[i - 1] && a[i])
            {
                a[i - 1] += a[i];
                a[i] = 0;
            }
        }
        vi v;
        for(int i = 0; i < n; i++) if(a[i]) v.pb(a[i]);
        for(int i = 0; i < v.size(); ++i) cout << v[i] << ' ';
        int cnt = n - v.size();
        while(cnt--) cout << 0 << ' ';
        cout << endl;
    }
    return 0;
}

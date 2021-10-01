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
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define PI 3.141592653589793238
#define endl '\n'

int main()
{
    faster();
    int t;
    cin>>t;
    while(t--)
    {
        ll ans = 0;
        int n, k;
        cin >> n >> k;
        vi a(n);
        F(i, 0, n) cin >> a[i];
        sort(a.begin(), a.end());
        int st = n - 1;
        F(i, 0, st)
        {
            int x = lower_bound(a.begin() + i + 1, a.end(), a[i] + k) - a.begin();
            if(x == n) --x;
            if(a[x] > a[i] + k) --x;
            while(a[x] == a[i] + k) --x;
            if(x > i) ans += x - i;
        }
        cout << ans << endl;
    }
    return 0;
}

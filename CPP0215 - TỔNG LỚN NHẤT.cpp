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
        int n,m;
        cin >> n >> m;
        ll a[n + 1], b[m + 1], ans, x;
        a[0] = b[0] = 0;
        FOR(i, 1, n)
        {
            cin >> x;
            a[i] = a[i - 1] + x;
        }
        FOR(i, 1, m)
        {
            cin >> x;
            b[i] = b[i - 1] + x;
        }
        ans = max(a[n], b[m]);
        int st = min(m, n);
        FOR(i, 1, st) ans = max(ans, max(a[i] + b[m] - b[i], b[i] + a[n] - a[i]));
        cout << ans << endl;
    }
    return 0;
}

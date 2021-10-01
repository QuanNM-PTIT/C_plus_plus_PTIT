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
        int n, k, x, l, r;
        cin >> n;
        vi a(n);
        F(i, 0, n) cin >> a[i];
        cin >> k >> x;
        int m = lower_bound(a.begin(), a.end(), x) - a.begin();
        if(a[m] == x)
        {
            r = m + 1;
            l = m - 1;
        }
        else
        {
            r = m;
            l = m - 1;
        }
        FORD(i, k / 2 - 1, 0) cout << a[l - i] << ' ';
        F(i, 0, k / 2) cout << a[r + i] << ' ';
        cout << endl;
    }
    return 0;
}

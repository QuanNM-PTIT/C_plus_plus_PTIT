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
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        F(i, 0, n) cin >> a[i];
        int ans = INT_MIN;
        b[n - 1] = a[n - 1];
        FORD(i, n - 2, 0) b[i] = max(b[i + 1], a[i]);
        int l = 0 , r = 0;
        while(l < n && r < n)
        {
            if(a[l] <= b[r])
            {
                ans = max(ans, abs(l - r));
                ++r;
            }
            else ++l;
        }
        cout << ans << endl;
    }
    return 0;
}

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

int a[10000005];

int main()
{
    faster();
    int t, n, k;
    cin >> t;
    while(t--)
    {
        bool check = 0;
        ll sum = 0, ans = INT_MAX, l, r;
        cin >> n >> k;
        F(i, 0, n) cin >> a[i];
        l = r = 0;
        while(r < n)
        {
            sum += a[r];
            if(sum > k)
            {
                while(sum - a[l] > k)
                {
                    sum -= a[l];
                    ++l;
                }
                ans = min(ans, r - l + 1);
            }
            ++r;
        }
        if(sum > k)
        {
            while(sum - a[l] > k)
            {
                sum -= a[l];
                ++l;
            }
            ans = min(ans, r - l + 1);
        }
        if(ans != INT_MAX) cout << ans << endl;
        else cout << -1 << endl;
    } 
    return 0;
}
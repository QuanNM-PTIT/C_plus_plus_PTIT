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

int minSwap(int a[], int n, int k)
{
    int cnt = 0;
    for(int i = 0; i < n; ++i) if(a[i] <= k) ++cnt;
    int tmp = 0;
    for(int i = 0; i < cnt; ++i) if(a[i] > k) ++tmp;
    int ans = tmp;
    for (int i = 0, j = cnt; j < n; ++i, ++j)
    {
        if (a[i] > k) --tmp;
        if (a[j] > k) ++tmp;
        ans = min(ans, tmp);
    }
    return ans;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    cout << minSwap(a, n, k) << endl;
}
  
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

bool a[505][505];
int dp[505][505];

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = 0;
        FOR(i, 1, n)
        FOR(j, 1, m)
        {
            cin >> a[i][j];
            dp[i][j] = a[i][j];
            if(dp[i][j]) ans = 1;
        }
        FOR(i, 0, n) dp[0][i] = 0;
        FOR(i, 0, m) dp[i][0] = 0;
        FOR(i, 1, n)
        FOR(j, 1, m)
        {
            if(a[i][j])
            {
                if(a[i - 1][j]==0 || a[i][j - 1]==0 || a[i - 1][j - 1]==0) continue;
                dp[i][j] = min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1]));
                dp[i][j]++;
                ans = max(ans, dp[i][j]);
            }
        }
        cout << ans << endl;
    }
}

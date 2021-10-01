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
#define endl '\n'
  
int main()
{
    faster();
    int n;
    cin >> n;
    int a[n][n], ans = 0;
    F(i, 0, n) F(j, 0, n) cin >> a[i][j];
    F(i, 0, n)
    {
        F(j, 0, n)
        {
            int x = 0, y = 0, k = 0;
            while(k <= i && k <= j && i + k < n && j + k < n)
            {
                x += a[i - k][j - k] + a[i + k][j + k];
                y += a[i - k][j + k] + a[i + k][j - k];
                ans = max(ans, x - y);
                ++k;
            }
            x = 0;
            y = 0;
            k = 0;
            while(k <= i && k <= j && i + k + 1 < n && j + k + 1 < n)
            {
                x += a[i - k][j - k] + a[i + k + 1][j + k + 1];
                y += a[i - k][j + k + 1] + a[i + k + 1][j - k];
                ans = max(ans, x - y);
                ++k;
            }
        }
    }
    cout << ans;
    return 0;
}


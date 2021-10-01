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

int n, k;
int a[20][20], Max;
ll sum, ans;

void Try(int i, int j)
{
    sum += a[i][j];
    if(sum == k && i == n - 1 && j == n - 1) ++ans;
    else if(sum + Max * (2 * n - i - j - 2) >= k )
    {
        if(i < n - 1) Try(i + 1, j);
        if(j < n - 1) Try(i, j + 1);
    }
    sum -= a[i][j];
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        Max = -1;
        ans = 0;
        cin >> n >> k;
        F(i, 0, n)
        {
            F(j, 0, n)
            {
                cin >> a[i][j];
                Max = max(Max, a[i][j]);
            }
        }
        Try(0, 0);
        cout << ans << endl;
    }
    return 0;
}

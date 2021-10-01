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

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, soHang, soCot, vtHang, vtCot, cnt = 1;
        cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> a[i][j];
        int ans[n * m], idx = n * m - 1;
        soHang = n;
        soCot = m;
        vtHang = vtCot = 0;
        while(cnt <= m * n)
        {
            for(int i = vtCot; i < soCot; i++)
            {
                ans[idx] = a[vtHang][i];
                cnt++;
                idx--;
            }
            for(int i = vtHang + 1; i < soHang; i++)
            {
                ans[idx] = a[i][soCot - 1];
                cnt++;
                idx--;
            }
            for(int i = soCot - 2; i >= vtCot; i--)
            {
                ans[idx] = a[soHang - 1][i];
                cnt++;
                idx--;
            }
            for(int i = soHang - 2; i > vtHang; i--)
            {
                ans[idx] = a[i][vtCot];
                cnt++;
                idx--;
            }
            vtHang++;
            vtCot++;
            soHang--;
            soCot--;
        }
        for(int i = 0; i < n * m; i++) cout << ans[i] << ' ';
        cout << endl;
    }
    return 0;
}

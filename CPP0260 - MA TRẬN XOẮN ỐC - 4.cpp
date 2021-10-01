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
  
int main()
{
    faster();
    int n, soHang, soCot, vtHang, vtCot, cnt = 1;
    cin >> n;
    int a[n][n], tmp[n * n + 1];
    int ed = n * n;
    FOR(i, 1, ed) cin >> tmp[i];
    sort(tmp + 1, tmp + ed + 1);
    soHang = n;
    soCot = n;
    vtHang = vtCot = 0;
    while(cnt <= n * n)
    {
        for(int i = vtCot; i < soCot; i++)
        {
            a[vtHang][i] = tmp[cnt];
            cnt++;
        }
        for(int i = vtHang + 1; i < soHang; i++)
        {
            a[i][soCot - 1] = tmp[cnt];
            cnt++;
        }
        for(int i = soCot - 2; i >= vtCot; i--)
        {
            a[soHang - 1][i] = tmp[cnt];
            cnt++;
        }
        for(int i = soHang - 2; i > vtHang; i--)
        {
            a[i][vtCot] = tmp[cnt];
            cnt++;
        }
        vtHang++;
        vtCot++;
        soHang--;
        soCot--;
    }
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n; j++) cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}

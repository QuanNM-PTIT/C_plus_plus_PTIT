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
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        F(i, 0, n) F(j, 0, m) cin >> a[i][j];
        int ans[n * m];
        int i = 0;
        int row = 0, col = 0;
        bool check = true;
        while(row < n && col <m)
        {
            if(check)
            {
                while(row > 0 && col < m - 1)
                {
                    ans[i++] = a[row][col];
                    --row;
                    ++col;
                }
                ans[i++] = a[row][col];
                if(col == m - 1) ++row;
                else ++col;
            }
            else
            {
                while(row < n - 1 && col > 0)
                {
                    ans[i++] = a[row][col];
                    ++row;
                    --col;
                }
                ans[i++] = a[row][col];
                if(row == n - 1) ++col;
                else ++row;
            }
            check = !check;
        }
        int st = n * m;
        F(j, 0, st) cout << ans[j] << ' ';
        cout << endl;
    }
    return 0;
}

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

void Try(int i, int j, vector<vector<int>> &res)
{
    if(i < 0 || j < 0 || j >= res[0].sz || i >= res.sz || !res[i][j]) return;
    res[i][j] = 0;
    Try(i + 1, j, res);
    Try(i - 1, j, res);
    Try(i, j - 1, res);
    Try(i, j + 1, res);
    Try(i + 1, j + 1, res);
    Try(i-1, j - 1, res);
    Try(i + 1, j - 1, res);
    Try(i - 1, j + 1, res);
}

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
        vi v;
        vector<vector<int>> res;
        F(i, 0, n)
        {
            F(j, 0, m)
            {
                cin >> a[i][j];
                v.push_back(a[i][j]);
            }
            res.push_back(v);
            v.clear();
        }
        int cnt = 0;
        F(i, 0, res.sz)
        {
            F(j, 0, res[0].sz)
            {
                if(res[i][j] == 1)
                {
                    ++cnt;
                    Try(i, j, res);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

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

int n;
char a[405][405];

int calc()
{
    int max = 0;
    int hor[n][n], ver[n][n];
    hor[0][0] = ver[0][0] = (a[0][0] == 'X');
 
    // Fill values in hor[][] and ver[][]
    F(i, 0, n)
    {
        F(j, 0, n)
        {
            if (a[i][j] == 'O') ver[i][j] = hor[i][j] = 0;
            else
            {
                hor[i][j] = (j == 0) ? 1 : hor[i][j - 1] + 1;
                ver[i][j] = (i == 0) ? 1 : ver[i - 1][j] + 1;
            }
        }
    }
    FORD(i, n - 1, 1)
    {
        FORD(j, n - 1, 1)
        {
            int MIN = min(hor[i][j], ver[i][j]);
            while (MIN > max)
            {
                if (ver[i][j - MIN + 1] >= MIN && hor[i - MIN + 1][j] >= MIN) max = MIN;
                --MIN;
            }
        }
    }
    return max;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        F(i, 0, n) F(j, 0, n) cin >> a[i][j];
        cout << calc() << endl;
    }
    return 0;
}

//int calc()
//{
//    pair<int, int> dp[405][405];
//    int MAX[405][405];
//    memset(MAX, 0, sizeof(MAX));
//    int x = 0, y = 0;
//    F(i, 0, n)
//    {
//        x = 0;
//        F(j, 0, n)
//        {
//            if(a[i][j] == 'X') ++x;
//            else x = 0;
//            dp[i][j].fi = x;
//        }
//    }
//    F(i, 0, n)
//    {
//        F(j, 0, n)
//        {
//            if(a[j][i] == 'X') ++y;
//            else y = 0;
//            dp[j][i].se = y;
//        }
//    }
//    int res = 0, val = 0;
//    F(i, 0, n)
//    {
//        F(j, 0, n)
//        {
//            val = min(dp[i][j].fi, dp[i][j].se);
//            if (dp[i][j - val + 1].se >= val && dp[i - val + 1][j].fi >= val) MAX[i][j] = val;
//            else MAX[i][j] = 0;
//            res = max(res, MAX[i][j]);
//        }
//    }
//    return res;
//}
//
//int main()
//{
//    faster();
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        cin >> n;
//        F(i, 0, n) F(j, 0, n) cin >> a[i][j];
//        cout << calc() << endl;
//    }
//    return 0;
//}

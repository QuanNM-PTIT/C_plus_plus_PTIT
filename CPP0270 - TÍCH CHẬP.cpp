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
    int t, n, m;
    cin >> t;
    while(t--)
    {
        ll s = 0;
        cin >> n >> m;
        int a[n][m], b[3][3];
        F(i, 0, n) F(j, 0, m) cin>>a[i][j];
        F(i, 0, 3) F(j, 0, 3) cin >> b[i][j];
        int st1 = n - 2, st2 = m - 2;
        F(i, 0, st1)
        {
            F(j, 0, st2)
            {
                int st3 = i + 3, st4 = j + 3;
                F(x, i, st3) F(y, j, st4) s+=a[x][y] * b[x - i][y - j];
            }
        }
        cout << s << endl;
    }
    return 0;
}

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

ll a[25][25] = {};

int main()
{
    faster();
    F(i, 0, 25)
    {
        F(j, i, 25)
        {
            if(i == j || !i) a[i][j] = 1;
            else if(i == 1) a[i][j] = j;
            else a[i][j] = a[i - 1][j - 1] + a[i][j - 1];
        }
    }
    int t, n, r, g, b;
    cin >> t;
    while(t--)
    {
        ll sum = 0;
        cin >> n >> r >> g >> b;
        FOR(i, r, n - g - b) FOR(j, g, n - b - i) sum += a[i][n] * a[j][n - i];
        cout << sum << endl;
    }
    return 0;
}

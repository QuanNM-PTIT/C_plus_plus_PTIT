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
#define vb vector<bool>
#define endl '\n'

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n + 5][n + 5];
        FOR(i, 1, n) FOR(j, 1, n) cin >> a[i][j];
        FOR(i, 1, n) cout << a[1][i] << ' ';
        cout << endl;
        FOR(i, 2, n - 1)
        {
            FOR(j, 1, n)
            {
                if(j == 1 || j == n) cout << a[i][j] << ' ';
                else cout << "  ";
            }
            cout << endl;
        }
        FOR(i, 1, n) cout << a[n][i] << ' ';
        cout << endl;
    }
    return 0;
}

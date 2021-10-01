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
    int n, m, p;
    cin >> n >> m >> p;
    int a[n + 5][m + 5], b[m + 5][p + 5];
    FOR(i,1,n) FOR(j,1,m) cin >> a[i][j];
    FOR(i,1,m) FOR(j,1,p) cin >> b[i][j];
    FOR(i,1,n)
    {
        ll sum = 0;
        int cnt = n;
        int idx = 1;
        while(cnt--)
        {
            sum = 0;
            FOR(j, 1, m) sum += a[i][j] * b[j][idx];
            cout << sum << ' ';
            ++idx;
        }
        cout << endl;
    }
    return 0;
}


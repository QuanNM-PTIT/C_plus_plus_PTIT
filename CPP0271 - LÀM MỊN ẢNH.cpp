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
    int t, n, m, l;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> l;
        vector<vi> a(n + 1, vi (m + 1, 0));
        FOR(i, 1, n)
        {
            FOR(j, 1, m)
            {
                cin>>a[i][j];
                a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
            }
        }
        int st1 = n - l + 1, st2 = m - l + 1;
        FOR(i, 1, st1)
        {
            FOR(j, 1, st2) cout << (a[i + l - 1][j + l - 1] - a[i - 1][j + l - 1] - a[i + l - 1][j - 1] + a[i - 1][j - 1]) / (l * l) << ' ';
            cout << endl;
        }
    }
    return 0;
}

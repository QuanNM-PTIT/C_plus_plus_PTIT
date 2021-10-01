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
    int t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        bool a[n + 5][m + 5];
        set<int> r, c;
        FOR(i, 1, n)
        {
            FOR(j, 1, m)
            {
                cin >> a[i][j];
                if(a[i][j])
                {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(auto i : r) FOR(j, 1, m) a[i][j] = 1;
        for(auto j : c) FOR(i, 1, n) a[i][j] = 1;
        FOR(i, 1, n)
        {
            FOR(j, 1, m) cout << a[i][j] << ' ';
            cout << endl;
        }
    }
    return 0;
}

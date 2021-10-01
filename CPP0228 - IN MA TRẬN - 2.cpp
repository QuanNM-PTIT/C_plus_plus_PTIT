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

void solve(int n)
{
    int m = 8 * n * n;
    int c1[m];
    c1[0] = 8 * n * n + 2 * n;
    int cur = c1[0];
    int dd = 1, step = 2;
    int idx = 1;
    while(idx < m)
    {
        F(i, 0, step)
        {
            cur = c1[idx++] = (cur - 4 * n * dd);
            if(idx >= m) break;
        }
        if (idx >= m) break;
        F(i, 0, step)
        {
            cur = c1[idx++] = cur + dd;
            if (idx >= m) break;
        }
        dd = dd * (-1);
        step += 2;
    }
    int c2[m];
    F(i, 0, m) c2[i] = 16 * n * n + 1 - c1[i];
    F(i, 0, m) cout << c1[i] << ' ';
    cout << endl;
    F(i, 0, m) cout << c2[i] << ' ';
}

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        solve(n);
        cout << endl;
    }
    return 0;
}

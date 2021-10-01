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
		int r = 0, c = 0;
		int n1 = n, m1 = m;
		int bef, cur;
		while(r < n && c < m)
        {
			if(r + 1 == n || c + 1 == m) break;
			bef = a[r + 1][c];
			F(i, c, m)
            {
				cur = a[r][i];
				a[r][i] = bef;
				bef = cur;
			}
		    ++r;
			F(i, r, n)
            {
				cur = a[i][m - 1];
				a[i][m - 1] = bef;
				bef = cur;
			}
			--m;
			if(r < n)
            {
				FORD(i, m - 1, c)
                {
					cur = a[n - 1][i];
					a[n - 1][i] = bef;
					bef = cur;
				}
			}
			--n;
			if(c < m)
            {
				FORD(i, n - 1, r)
                {
					cur = a[i][c];
					a[i][c] = bef;
					bef = cur;
				}
			}
			++c;
		}
        n = n1;
        m = m1;
		F(i, 0, n) F(j, 0, m) cout << a[i][j] << ' '; 
		cout << endl;
	}
	return 0;
}
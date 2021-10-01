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
	int n;
	cin >> n;
	int a[n][n];
	F(i, 0, n) F(j, 0, n) cin >> a[i][j];
	int m;
	cin >> m;
	int b[m][m];
	F(i, 0, m) F(j, 0, m) cin >> b[i][j];
	for(int i = 0; i < n; i += m) for(int j = 0; j < n; j += m) F(k, 0, m) F(l, 0, m) a[k+i][l+j] *= b[k][l];
	F(i, 0, n)
	{
		F(j, 0, n) cout << a[i][j] << " "; 
		cout << endl;
	}
	return 0;
}

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
    int n, k, b, x, ans = INT_MAX, tmp = 0;
	cin >> n >> k >> b;
    vi v(n + 5, 1);
	F(i, 0, b)
    {
		cin >> x;
		v[x] = 0;
	}
	FOR(i, 1, k) tmp += v[i];
	ans = min(ans, k - tmp);
	FOR(i, k + 1, n)
    {
        tmp += v[i];
        tmp -= v[i - k];
		ans = min(ans, k - tmp);
	}
	cout<< ans;
    return 0;
} 
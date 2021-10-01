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
		int n, x, cnt = 0;
		cin >> n;
		set<int> a[n];
		F(i, 0, n)
		{
			F(j, 0, n)
			{
				cin >> x;
				a[i].insert(x);
			}
		}
		for(auto i : a[0])
		{
			bool check = 1;
			F(j, 1, n)
			{
				if(a[j].find(i) == a[j].end())
				{
					check = 0;
					break;
				}
			}
			if(check) ++cnt;
		}
		cout << cnt << endl;
	}
	return 0;
}
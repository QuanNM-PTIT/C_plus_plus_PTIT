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

int Count(string s,int n)
{
	int cnt = 0;
	F(i, 0, s.length())
    {
		int x = 0;
		F(j, i, s.length())
        {
			x = (x * 10 + s[j] - '0') % n;
			if(!x) ++cnt;
		}
	}
	return cnt;
} 

int main()
{ 
    faster();
	int t;
	cin >> t;
    string s;
	while(t--)
    {
		cin >> s;
		cout << Count(s, 8) - Count(s, 24) << endl;
	}
    return 0;
}
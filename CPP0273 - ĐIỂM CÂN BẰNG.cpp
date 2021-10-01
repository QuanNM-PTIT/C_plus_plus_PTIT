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

int a[100005];

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        int sum = 0, sum2 = 0, ans = -1;
		cin >> n;
		F(i, 0, n)
        {
			cin >> a[i];
			sum += a[i];
		}
		F(i, 0, n)
        {
			if(sum2 << 1 == sum - a[i])
            {
				ans = i + 1;
				break;
			}
			sum2 += a[i];
		}
		cout << ans << endl;
    }
    return 0;
}
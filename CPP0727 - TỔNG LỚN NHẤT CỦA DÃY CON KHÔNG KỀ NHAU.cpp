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

ll a[100005];

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
		F(i, 0, n) cin >> a[i];
		if(n == 1) cout << a[0] << endl;
		else if(n==2) cout << max(a[0], a[1]) << endl;
		else
        {
			ll tmp, tmp1 = a[0], tmp2 = a[1], tmp3 = a[0] + a[2];
			F(i, 3, n)
            {
				tmp = a[i];
				if(tmp1 > tmp2) tmp += tmp1;
				else tmp += tmp2;
				tmp1 = tmp2;
                tmp2 = tmp3;
                tmp3 = tmp;
			}
			cout << max(tmp2, tmp3) << endl;
		}
    } 
    return 0;
}
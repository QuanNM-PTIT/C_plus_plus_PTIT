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

ll a[10005];

int main()
{
    faster();
    int t, n, k;
    cin >> t;
    while(t--)
    {
        ll sum = 0, tmp = INT_MIN, l, r;
        cin >> n >> k;
		F(i, 0, n) cin >> a[i];
		F(i, 0, k) sum += a[i];
        tmp = max(tmp, sum);
        F(i, k, n)
        {
            sum += a[i];
            sum -= a[i - k];
            if(tmp < sum)
            {
                l = i - k + 1;
                r = i;
                tmp = sum;
            }
        }
        FOR(i, l, r) cout << a[i] << ' ';
        cout << endl;
    } 
    return 0;
}
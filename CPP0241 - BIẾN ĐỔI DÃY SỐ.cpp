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

int a[1005];

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        F(i, 0, n) cin >> a[i];
        int cnt = 0;
        int l = 0, r = n - 1;
        while(l <= r)
        {
            if(a[l] == a[r])
            {
                ++l;
                --r;
            }
            else if(a[l] < a[r])
            {
                ++l;
                a[l] += a[l - 1];
                ++cnt;
            }
            else
            {
                --r;
                a[r] += a[r + 1];
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
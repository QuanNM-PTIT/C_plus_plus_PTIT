// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vi l(n,1);
        vi r(n,1);
        for(int i = 1; i < n; i++)
        {
            int tmp = 0;
            for(int j = i; j >= 0; j--) if (a[i] > a[j]) tmp = max(tmp, l[j]);
            l[i] = tmp + 1;
        }
        for(int i = n - 2; i >= 0; i--)
        {
            int tmp = 0;
            for(int j = i; j < n; j++) if (a[i] > a[j]) tmp = max(tmp ,r[j]);
            r[i] = tmp + 1;
        }
        int res = 0;
        for(int i = 0; i < n; i++) res = max(res, l[i] + r[i] - 1);
        cout << res << endl;
    }
    return 0;
}

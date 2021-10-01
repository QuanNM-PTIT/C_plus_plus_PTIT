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
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int n, a[1005], F[1010];

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int ans = 0;
        cin >> n;
        int b[1005];
        FOR(i, 1, n) cin >> a[i];
        FOR(i, 1, n)
        {
            F[i] = lower_bound(b + 1, b + ans + 1, a[i]) - b;
            ans = max(ans, F[i]);
            b[F[i]] = a[i];
        }
        cout << ans << endl;
    }
    return 0;
}

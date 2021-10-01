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
    cin>>t;
    while(t--)
    {
        int n, ans = 0;
        cin >> n;
        int a[n + 1], b[n + 1];
        a[0] = b[0] = 0;
        FOR(i, 1, n)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        FOR(i, 1, n)
        {
            cin >> b[i];
            b[i] += b[i - 1];
        }
        FOR(i, 1, n) FOR(j, i + ans, n) if(a[j] - a[i - 1] == b[j] - b[i - 1]) ans = max(ans, j - i + 1);
        cout << ans << endl;
    }
    return 0;
}

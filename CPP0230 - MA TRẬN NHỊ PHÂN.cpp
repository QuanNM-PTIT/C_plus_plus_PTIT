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
#define endl '\n'

int main()
{
    faster();
    int n, ans = 0;
    cin >> n;
    int a[n + 1][4];
    FOR(i, 1, n)
    {
        int cnt = 0;
        FOR(j, 1, 3)
        {
            cin >> a[i][j];
            if(a[i][j]) ++cnt;
        }
        if(cnt > 1) ++ans;
    }
    cout << ans;
    return 0;
}


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
#define vb vector<bool>
#define endl '\n'

int main()
{
    faster();
    int t, n, y, x, ans;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        bool check = 0;
        FOR(i, 1, n)
        {
            cin >> y;
            if(!check && y == x)
            {
                ans = i;
                check = 1;
            }
        }
        if(check) cout << ans << endl;
        else cout << -1 << endl;
    }
    return 0;
}


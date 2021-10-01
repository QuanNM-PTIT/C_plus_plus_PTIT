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

int main()
{
    faster();
    int t, n, k;
    cin >> t;
    while(t--)
    {
        vi v;
        cin >> n >> k;
        FOR(i, 2, sqrt(n))
        {
            while(n % i == 0)
            {
                v.pb(i);
                n /= i;
            }
        }
        if(n > 1) v.pb(n);
        if(k > v.size()) cout << -1 << endl;
        else cout << v[k - 1] << endl;
    }
    return 0;
}


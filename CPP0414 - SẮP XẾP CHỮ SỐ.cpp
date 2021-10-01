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
#define endl '\n'

int a[105];

int main()
{
    faster();
    int t, n;
    ll k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        set<int> s;
        while(n--)
        {
            cin >> k;
            while(k)
            {
                s.insert(k % 10);
                k /= 10;
            }
        }
        for(auto i : s) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

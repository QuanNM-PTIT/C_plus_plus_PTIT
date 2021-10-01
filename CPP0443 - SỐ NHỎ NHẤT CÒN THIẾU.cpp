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
    int t, x;
    ll n;
    cin >> t;
    while(t--)
    {
        ll tmp = 0, sum;
        cin >> n;
        sum = n * (n + 1) / 2;
        --n;
        FOR(i, 1, n)
        {
            cin >> x;
            tmp += x;
        }
        cout << sum - tmp << endl;
    }
    return 0;
}

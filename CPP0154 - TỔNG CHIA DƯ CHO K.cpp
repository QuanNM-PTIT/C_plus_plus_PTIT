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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll k;
        cin >> k;
        ll sum = 0;
        FOR(i, 1, n)
        {
            sum += i % k;
            if(sum > k) break;
        }
        if(sum == k) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}

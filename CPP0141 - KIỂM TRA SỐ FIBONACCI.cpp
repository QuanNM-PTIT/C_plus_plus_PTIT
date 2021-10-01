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
    vector<ll> F;
    F.pb(0);
    F.pb(1);
    int idx = 0;
    ll n1 = 0, n2 = 1, n3;
    while(idx <= 89)
    {
        n3 = n1 + n2;
        F.pb(n3);
        n1 = n2;
        n2 = n3;
        idx++;
    }
    int t;
    ll n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if(binary_search(F.begin(), F.end(), n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}  

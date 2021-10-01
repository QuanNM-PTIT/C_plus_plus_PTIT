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
    int L, R, tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    L = min(tmp1, tmp2);
    R = max(tmp1, tmp2);
    vector<bool> isPrime(R - L + 1, 1);
    for(ll i = 2; i * i <= R; ++i)
    {
        for(ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i) isPrime[j - L] = 0;
    }
    if(1 >= L) isPrime[1 - L] = 0;
    for(ll i = L; i <= R; ++i) if(isPrime[i - L]) cout << i << ' ';
    return 0;
}

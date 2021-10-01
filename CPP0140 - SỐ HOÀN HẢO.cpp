// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

bool Solve()
{
    ll n;
    cin >> n;
    if (n > (ll) 1e12) return 0;
    ll Sum = 1;
    double sqr = sqrt(n);
    for(int i = 2; i < sqr; i++)
    {
        if(n % i == 0)
        {
            Sum += i;
            Sum += n / i;
        }
    }
    sqr = (int) sqr;
    if(sqr * sqr == n) Sum += sqr;
    return Sum == n;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--) cout << Solve() << endl;
    return 0;
}

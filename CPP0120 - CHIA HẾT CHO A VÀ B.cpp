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

int m, n;

int gcd(int a, int b)
{
    if(!b) return a;
    return gcd(b, a % b);
}

int calc(int a)
{
    int i = 1, l, r;
    while(a * i < m) ++i;
    l = i;
    while(a * i <= n) ++i;
    --i;
    r = i;
    return r - l + 1;

}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> m >> n >> a >> b;
        int lcm = a * b / gcd(a, b);
        cout << calc(a) + calc(b) - calc(lcm) << endl;
    }
    return 0;
}

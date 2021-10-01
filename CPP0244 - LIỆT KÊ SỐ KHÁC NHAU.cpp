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

int n, x;
set<int> s;

int main()
{
    faster();
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> x;
        s.insert(x);
    }
    for(auto i : s) cout << i << ' ';
    return 0;
}

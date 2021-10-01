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

int F[20];
bool check[1005] = {};
int a[105];

void Pre()
{
    F[0] = 0;
    F[1] = 1;
    check[0] = check[1] = 1;
    FOR(i, 2, 16)
    {
        F[i] = F[i-1] + F[i-2];
        check[F[i]] = 1;
    }
}
int main()
{
    faster();
    Pre();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        FOR(i, 1, n) cin >> a[i];
        FOR(i, 1, n) if(check[a[i]]) cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}

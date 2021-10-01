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
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define PI 3.141592653589793238
#define endl '\n'

int n;
int a[1005];

int calc()
{
    int res = 0;
    while (1)
    {
        int cnt = 0, i;
        for(i = 0; i < n; ++i)
        { 
            if (a[i] & 1) break;
            else if (!a[i])  ++cnt;
        }
        if (cnt == n) return res;
        if (i == n)
        {
            F(j, 0, n) a[j] = a[j] / 2;
            ++res;
        }
        FOR(j, i, n)
        {
           if (a[j] & 1)
           {
              --a[j];
              ++res;
           }
        }
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        F(i, 0, n) cin >> a[i];
        cout << calc() << endl;
    }
    return 0;
}
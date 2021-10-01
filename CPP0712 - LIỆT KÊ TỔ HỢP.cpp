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

int n, k, stop=0;

void KhoiTao(int a[])
{
    FOR(i, 1, n) a[i]=i;
}
void In(int a[])
{
    FOR(i, 1, k) cout << a[i];
    cout << ' ';
}

void Sinh(int a[])
{
    int i = k;
    while(i > 0 && a[i] == n - k + i) --i;
    if(!i) stop = 1;
    else ++a[i];
    int p = a[i];
    while(i <= k) a[i++] = p++;
}

void ToHop(int a[])
{
    while(!stop)
    {
        In(a);
        Sinh(a);
    }
}
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int a[25];
        stop = 0;
        cin >> n >> k;
        KhoiTao(a);
        ToHop(a);
        cout << endl;
    }
    return 0;
}

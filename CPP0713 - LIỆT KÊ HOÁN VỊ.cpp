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

int n;
bool Bool[25] = {0};
int A[25];

void xuat()
{
    FOR(i, 1, n) cout << A[i];
    cout << ' ';
}

void Try(int k)
{
    FOR(i, 1, n)
    {
        if (!Bool[i])
        {
            A[k]=i;
            Bool[i]=1;
            if (k==n) xuat();
            else Try(k+1);
            Bool[i] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        Try(1);
        cout << endl;
    }
}

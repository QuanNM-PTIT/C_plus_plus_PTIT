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
#define endl '\n'

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int n = a * b;
        int arr[n];
        for(int i = 0; i < n; ++i) cin >> arr[i];
        sort(arr, arr + n);
        for(int i = 0; i < n; ++i) cout << arr[i] << ' ';
        cout << endl;
    }
    return 0;
}

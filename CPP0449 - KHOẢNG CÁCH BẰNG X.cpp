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

int a[100005];

bool binSearch(int l, int r, int x)
{
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x) return 1;
        if(a[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return 0;
}
  
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        FOR(i, 1, n) cin >> a[i];
        sort(a + 1, a + 1 + n);
        int b = -1;
        FOR(i, 1, n)
        {
            if(binSearch(1, n, k + a[i]))
            {
                b = 1;
                break;
            }
        }
        cout << b << endl;
    }
    return 0;
}

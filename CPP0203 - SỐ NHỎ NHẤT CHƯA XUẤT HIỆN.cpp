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

int a[100005];

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int dd[1000005] = {};
        FOR(i, 1, n)
        {
            cin >> a[i];
            if(a[i] > 0) dd[a[i]]++;
        }
        FOR(i, 1, 1000000)
        {
            if(!dd[i])
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}

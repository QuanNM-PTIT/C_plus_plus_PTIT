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
#define vb vector<bool>
#define endl '\n'

int a[100005];

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        int dd[100005] = {};
        cin >> n;
        FOR(i, 1, n)
        {
            cin >> a[i];
            dd[a[i]]++;
        }
        sort(a + 1, a + 1 + n);
        int cnt = 0;
        FOR(i, a[1], a[n]) if(!dd[i]) cnt++;
        cout << cnt << endl;
    }
    return 0;
}


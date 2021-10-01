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

int n, k, a[10000005];

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        multiset<int, greater<int>> s;
        cin >> n >> k;
        FOR(i, 1, n) cin >> a[i];
        int idx = k + 1;
        FOR(i, 1, k) s.insert(a[i]);
        auto it = s.begin();
        cout << *it << " ";
        FOR(i, idx, n)
        {
            auto f = s.find(a[i - k]);
            s.erase(f);
            s.insert(a[i]);
            it = s.begin();
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}

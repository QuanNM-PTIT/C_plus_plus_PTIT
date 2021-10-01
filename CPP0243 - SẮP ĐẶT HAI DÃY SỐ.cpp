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
#define endl '\n'

int main()
{
    faster();
    int t;
    cin >> t;
    int n, m;
    while(t--)
    {
        cin >> n >> m;
        int a[n], b[m];
        vi v;
        map<int, int> myMap;
        F(i, 0, n)
        {
            cin >> a[i];
            ++myMap[a[i]];
        }
        F(i, 0, m) cin >> b[i];
        sort(a, a + n);
        F(i, 0, m)
        {
            int tmp = myMap[b[i]];
            F(j, 0, tmp)
            {
                v.pb(b[i]);
                --myMap[b[i]];
            }
        }
        F(i, 0, n) if(myMap[a[i]]) v.pb(a[i]);
        F(i, 0, v.sz) cout << v[i] << ' ';
        cout << endl;
    }
    return 0;
}

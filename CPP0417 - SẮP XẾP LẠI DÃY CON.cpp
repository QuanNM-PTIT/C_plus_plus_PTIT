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
    int t, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vi v1, v2;
        F(i, 0, n)
        {
            cin >> x;
            v1.pb(x);
        }
        v2 = v1;
        sort(v2.begin(), v2.end());
        F(i, 0, v1.sz)
        {
            if(v1[i] != v2[i])
            {
                cout << i + 1 << ' ';
                break;
            }
        }
        FORD(i, v1.sz - 1, 0)
        {
            if(v1[i] != v2[i])
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
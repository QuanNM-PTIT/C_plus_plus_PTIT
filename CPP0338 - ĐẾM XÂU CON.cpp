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

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        int k;
        cin >> a >> k;
        int dd[26] = {}, n = a.sz, ans = 0;
        F(i, 0, n)
        {
            int dd[26] = {}, l = n, s = 0, r = n;
            F(j, i, n)
            {
                if(!dd[a[j] - 'a']) ++s;
                ++dd[a[j] - 'a'];
                if(s == k)
                {
                    l = j;
                    break;
                }
            }
            F(j, l + 1, n)
            {
                if(!dd[a[j] - 'a'])
                {
                    r = j;
                    break;
                }
            }
            if(l <= r) ans += r - l;
        }
        cout << ans << endl;
    }
    return 0;
}

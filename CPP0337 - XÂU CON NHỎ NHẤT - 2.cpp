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
    string a;
    cin >> t;
    while(t--)
    {
        cin >> a;
        int s = 0, dd[26] = {}, d[26] = {}, ans = INT_MAX, x = 0, l = 0, r = -1;
        F(i, 0, a.length())
        {
            if(!dd[a[i] - 'a'])
            {
                dd[a[i] - 'a'] = 1;
                ++s;
            }
        }
        F(i, 0, a.length())
        {
            ++d[a[i] - 'a'];
            if(d[a[i] - 'a'] == 1) ++x;
            if(x == s)
            {
                while(d[a[l] - 'a'] > 1)
                {
                    if(d[a[l] - 'a'] > 1) --d[a[l] - 'a'];
                    ++l;
                }
                int y = i - l + 1;
                if(ans > y)
                {
                    ans = y;
                    r = l;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

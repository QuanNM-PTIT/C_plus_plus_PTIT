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
    string a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        int dd[26] = {}, s = INT_MAX, l, r;
        F(i, 0, b.length()) ++dd[b[i] - 'a'];
        F(i, 0, a.length())
        {
            int d[26] = {};
            F(j, i, a.length())
            {
                d[a[j] - 'a']++;
                bool check = 0;
                F(k, 0, 26)
                {
                    if(d[k] < dd[k])
                    {
                        check = 1;
                        break;
                    }
                }
                if(!check && s > j - i + 1)
                {
                    s = j - i + 1;
                    l = i;
                    r = j;
                }
            }
        }
        if(s == INT_MAX) cout << -1 << endl;
        else
        {
            FOR(i, l, r) cout << a[i];
            cout << endl;
        }
    }
    return 0;
}

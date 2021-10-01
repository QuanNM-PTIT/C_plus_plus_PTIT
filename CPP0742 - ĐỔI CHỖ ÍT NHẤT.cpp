// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt = 0;
        cin >> n;
        pair<int, int> p[n + 5];
        for(int i = 0; i < n; i++)
        {
            cin >> p[i].fi;
            p[i].se = i;
        }
        sort(p, p + n);
        vi dd(n + 5, 0);
        for(int i = 0; i < n; i++)
        {
            if(p[i].se == i || dd[i]) continue;
            int j = i, swp = 0;
            while(dd[j] == 0)
            {
                swp++;
                dd[j] = 1;
                j = p[j].se;
            }
            swp--;
            cnt += swp;
        }
        cout << cnt << endl;
    }
    return 0;
}

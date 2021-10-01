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
        bool dd[100005] = {};
        int n, p;
        cin >> n >> p;
        int num = 1;
        ll cnt = 0;
        while(pow(p, num) <= n) num++;
        if(pow(p, num) > n) num--;
        FORD(idx, num, 1)
        {
            ll tmp = pow(p, idx);
            int i = 1;
            while(1)
            {
                ll cmp = tmp * i;
                if(cmp > n) break;
                i++;
                if(!dd[cmp])
                {
                    cnt += idx;
                    dd[cmp] = 1;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

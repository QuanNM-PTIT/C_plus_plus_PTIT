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

const int N = 1000005;
bool check[N];
vi snt;

int main()
{
    faster();
    FOR(i, 2, N) check[i] = 1;
    FOR(i, 2, N) if(check[i]) for(int j = 2 * i; j <= N; j += i) check[j] = 0;
    for(int i = 2; i < N; i++) if(check[i]) snt.pb(i);
    int vSize = snt.sz;
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        int cnt = 0;
        int start = 0;
        while((ll) snt[start] * snt[start] < a) start++;
        for(int i = start; i < vSize; i++)
        {
            if((ll) snt[i] * snt[i] <= b) cnt++;
            else break;
        }
        cout << cnt << endl;
    }
    return 0;
}

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

bool check[1000007];

int main()
{
    faster();
    int N = 1000005;
    FOR(i, 2, N) check[i] = 1;
    FOR(i, 2, N) if(check[i]) for(int j = 2 * i; j <= N; j += i) check[j] = 0;
    ll snt[N];
    ll index = 0;
    F(i, 2, N) if(check[i]) snt[index++] = i;
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int cnt = 0;
        F(i, 0, index)
        {
            if(snt[i] * snt[i] <= n) ++cnt;
            else break;
        }
        cout << cnt << endl;
    }
    return 0;
}

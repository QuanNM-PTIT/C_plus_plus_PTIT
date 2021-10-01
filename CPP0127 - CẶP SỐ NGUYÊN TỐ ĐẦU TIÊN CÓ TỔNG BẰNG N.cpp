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
#define vb vector<bool>
#define endl '\n'

int main()
{
    faster();
    int N = 1000005;
    bool check[1000007];
    FOR(i, 2, N) check[i] = 1;
    FOR(i, 2, N) if(check[i]) for(int j = 2 * i; j <= N; j += i) check[j] = 0;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        bool kiemTra = 1;
        for(int i = 2; i < n; ++i)
        {
            if(check[i] && check[n-i])
            {
                cout << i << ' ' << n - i << endl;
                kiemTra = 0;
                break;
            }
        }
        if(kiemTra) cout << -1 << endl;
    }
    return 0;
}

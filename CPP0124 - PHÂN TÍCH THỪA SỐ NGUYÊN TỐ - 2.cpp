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
    int n;
    cin >> n;
    int cnt = 0;
    FOR(i, 2, sqrt(n))
    {
        cnt = 0;
        while(n % i == 0)
        {
            ++cnt;
            n /= i;
        }
        if(cnt) cout << i << ' ' << cnt << endl;
    }
    if(n > 1) cout << n << ' ' << 1;
    return 0;
}


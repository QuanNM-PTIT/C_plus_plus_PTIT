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

bool check(int n)
{
    int c = 0, l = 0;
    while(n)
    {
        if((n % 10) & 1) ++l;
        else ++c;
        n /= 10;
    }
    return l == c;
}

int main()
{
    faster();
    int n;
    cin >> n;
    int start = pow(10, n - 1), end = pow(10, n) - 1;
    int cnt = 0;
    FOR(i, start, end)
    {
        if(check(i))
        {
            cout << i << ' ';
            ++cnt;
        }
        if(cnt == 10)
        {
            cout << endl;
            cnt = 0;
        }
    }
    return 0;
}


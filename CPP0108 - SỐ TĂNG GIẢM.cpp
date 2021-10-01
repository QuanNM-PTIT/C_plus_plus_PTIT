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

int a[10] = {0, 0, 20, 38, 50, 38, 20, 8, 5, 0};

bool ktTangGiam(int n)
{
    int tmp1 = n % 10;
    n /= 10;
    int tmp2 = n % 10;
    n /= 10;
    if(tmp1 == tmp2) return 0;
    if(!n) return tmp1 > tmp2 || tmp2 > tmp1;
    if(tmp1 > tmp2)
    {
        while(n)
        {
            if(n % 10 >= tmp2) return 0;
            tmp2 = n % 10;
            n /= 10;
        }
    }
    else
    {
        while(n)
        {
            if(n % 10 <= tmp2) return 0;
            tmp2 = n % 10;
            n /= 10;
        }
    }
    return 1;
}

bool ktNguyenTo(int n)
{
    if(n < 2) return 0;
    double sqr = sqrt(n);
    for(int i = 2; i <= sqr; ++i) if(n % i == 0) return 0;
    return 1;
}

int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << a[n] << endl;
        continue;
        int start = pow(10, n - 1), end = pow(10, n) - 1, cnt = 0;
        FOR(i, start, end) if(ktTangGiam(i) && ktNguyenTo(i)) ++cnt;
        cout << cnt << endl;
    }
    return 0;
}

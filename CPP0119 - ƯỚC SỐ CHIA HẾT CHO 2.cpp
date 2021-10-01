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
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n & 1)
        {
            cout << 0 << endl;
            continue;
        }
        double sqr = sqrt(n);
        int cnt = 0;
        F(i, 1, sqr)
        {
            if(n % i == 0)
            {
                if(!(i & 1)) ++cnt;
                if(!(n / i & 1)) ++cnt;
            }
        }
        int tmp = (int) sqr;
        if(tmp * tmp == n && !(tmp & 1) && (n % tmp == 0)) ++cnt;
        cout << cnt << endl;
    }
    return 0;
}

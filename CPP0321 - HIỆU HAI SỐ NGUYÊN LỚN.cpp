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

void solve()
{
    string a, b;
    cin >> a >> b;
    int len = max(a.length(), b.length());
    while(a.length() < len) a = "0" + a;
    while(b.length() < len) b = "0" + b;
    if(a < b) swap(a, b);
    string as(len,'0');
    int rmb = 0;
    FORD(i, len - 1, 0)
    {
        int tg = (a[i] - '0') - (b[i] - '0') - rmb;
        if(tg < 0)
        {
            tg += 10;
            rmb = 1;
        }
        else rmb = 0;
        as[i] = tg + '0';
    }
    cout << as << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--) solve();
    return 0; 
} 
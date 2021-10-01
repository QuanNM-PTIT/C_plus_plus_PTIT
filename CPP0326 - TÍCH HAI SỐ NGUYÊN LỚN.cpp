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

string mul(string &a, string &b)
{
    string res = "";
    int n = a.length();
    int m = b.length();
    int len = n + m - 1;
    int rmb = 0;
    FORD(i, len, 0)
    {
        int tmp = 0;
        FORD(j, n - 1, 0)
            if(i - j <= m && i - j >= 1)
            {
                int a1 = a[j] - '0';
                int b1 = b[i - j - 1] - '0';
                tmp += a1 * b1;
            }
            tmp += rmb;
            rmb = tmp / 10;
            res = (char)(tmp % 10 + '0') + res;
    }
    while(res.length() > 1 && res[0] == '0') res.erase(0, 1);
    return res;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    string res = "";
    if ((a[0] == '-' && b[0] != '-') || (a[0] != '-' && b[0] == '-'))
    {
        if (a[0] == '-') a.erase(0, 1);
        if (b[0] == '-') b.erase(0, 1);
        res += "-";
        res = mul(a, b);
    }
    else
    {
        if (a[0] == '-') a.erase(0, 1);
        if (b[0] == '-') b.erase(0, 1);
        res = mul(a, b);
    }
    cout << res << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

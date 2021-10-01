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

int n, m;
int a[505][505];

int MAX(int idx)
{
    stack<int> res;
    int val, Max = 0, are = 0, i = 0;
    while(i < m)
    {
        if (res.empty() || a[idx][res.top()] <= a[idx][i]) res.push(i++);
        else
        {
            val = a[idx][res.top()];
            res.pop();
            are = val * i;
            if (!res.empty()) are = val * (i - res.top() - 1);
            Max = max(are, Max);
        }
    }
    while (!res.empty())
    {
        val = a[idx][res.top()];
        res.pop();
        are = val * i;
        if (!res.empty()) are = val * (i - res.top() - 1);
        Max = max(are, Max);
    }
    return Max;
}

int calc()
{
    int res = MAX(0);
    F(i, 1, n)
    {
        F(j, 0, m) if (a[i][j]) a[i][j] += a[i - 1][j];
        res = max(res, MAX(i));
    }
    return res;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        F(i, 0, n) F(j, 0, m) cin >> a[i][j];
        cout << calc() << endl;
    }
    return 0;
}

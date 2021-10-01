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

map<int, int> m;

pair<int, int> factor(int n)
{
    int s = 0;
    while ((n & 1) == 0)
    {
        s++;
        n >>= 1;
    }
    return {s, n};
}

int mulmod(int a, int b, int n)
{
    int r = 0;
    while (b > 0)
    {
        if (b % 2 != 0) r = (r + a) % n;
        a = a * 2 % n;
        b = b / 2;
    }
    return r;
}

int Pow(int a, int d, int n)
{
    int result = 1;
    a = a % n;
    while (d > 0)
    {
        if (d & 1) result = mulmod(result, a, n);
        d >>= 1;
        a = mulmod(a, a, n);
    }
    return result;
}

bool test_a(int s, int d, int n, int a)
{
    if (n == a) return true;
    int p = Pow(a, d, n);
    if (p == 1) return true;
    for (; s > 0; s--)
    {
        if (p == n-1) return true;
        p = mulmod(p, p, n);
    }
    return false;
}

bool miller(int n)
{
    if (n < 2) return false;
    if ((n & 1) == 0) return n == 2;
    int s, d;
    tie(s, d) = factor(n-1);
    return test_a(s, d, n, 2) && test_a(s, d, n, 3);
}

int main()
{
    faster();
    int n;
    cin >> n;
    if(miller(n)) cout << "YES";
    else cout << "NO";
    return 0;
}

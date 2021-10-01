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

ll gcd(ll a, ll b)
{
    if(!b) return a;
    return gcd(b, a % b);
}

struct PhanSo
{
    ll tu, mau;
};

void nhap(PhanSo &p)
{
    faster();
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p)
{
    ll UCLN = gcd(p.tu, p.mau);
    p.tu /= UCLN;
    p.mau /= UCLN;
}

PhanSo tong(PhanSo &p, PhanSo &q)
{
    ll BCNN = p.mau * q.mau / gcd(p.mau, q.mau);
    PhanSo ans;
    ans.mau = BCNN;
    ans.tu = (BCNN / p.mau) * p.tu + (BCNN / q.mau) * q.tu;
    rutgon(ans);
    return ans;
}

void in(PhanSo &p)
{
    cout << p.tu << '/' << p.mau;
}

int main() {
    struct PhanSo p,q;
    nhap(p); nhap(q);
    PhanSo t = tong(p,q);
    in(t);
    return 0;
}


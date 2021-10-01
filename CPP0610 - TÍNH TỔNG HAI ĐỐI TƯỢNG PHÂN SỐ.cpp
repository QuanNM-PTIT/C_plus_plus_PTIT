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
#define PI 3.141592653589793238
#define endl '\n'

ll gcd(ll a, ll b)
{
    if(!b) return a;
    return gcd(b, a % b);
}

class PhanSo
{
    private:
        ll tu, mau;
    public:
    PhanSo (ll, ll)
    {
        this -> tu;
        this -> mau;
    }
    void rutgon()
    {
        ll GCD = gcd(this -> tu, this -> mau);
        this -> tu /= GCD;
        this -> mau /= GCD;
    }
    void quydong(PhanSo &a)
    {
        this -> rutgon();
        a.rutgon();
        ll lcm = this -> mau * a.mau / gcd(this -> mau, a.mau);
        this -> tu *= lcm / this -> mau;
        a.tu *= lcm / a.mau;
        this -> mau = a.mau = lcm;
    }
    PhanSo &operator+(PhanSo &a)
    {
        this -> quydong(a);
        this -> tu = this -> tu + a.tu;
        this -> rutgon();
        return *this;
    }
    friend istream &operator >> (istream &is, PhanSo &a)
    {
        cin >> a.tu >> a.mau;
        return is;
    }
    friend ostream &operator << (ostream &os, PhanSo &a)
    {
        os << a.tu << '/' << a.mau;
        return os;
    }
};

int main()
{
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
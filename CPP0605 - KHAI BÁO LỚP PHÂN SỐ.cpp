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
    friend istream &operator >> (istream &is, PhanSo &a)
    {
        cin >> a.tu >> a.mau;
        return is;
    }
    void rutgon()
    {
        ll GCD = gcd(tu, mau);
        tu /= GCD;
        mau /= GCD;
    }
    friend ostream &operator << (ostream &os, PhanSo &a)
    {
        os << a.tu << '/' << a.mau;
        return os;
    }
};

int main(){
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
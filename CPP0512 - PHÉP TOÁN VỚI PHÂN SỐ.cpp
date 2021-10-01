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

struct PhanSo
{
    ll tu, mau;
};

void RG(PhanSo &a)
{
    ll GCD = gcd(a.tu, a.mau);
    a.tu /= GCD;
    a.mau /= GCD;
}

PhanSo calc2(PhanSo a, PhanSo b)
{
    PhanSo ans;
    ans.tu = a.tu * b.tu;
    ans.mau = a.mau * b.mau;
    RG(ans);
    return ans;
}

PhanSo calc1(PhanSo &a, PhanSo &b)
{
    PhanSo ans;
    ll lcm = a.mau * b.mau / gcd(a.mau, b.mau);
    ans.mau = lcm;
    ans.tu = a.tu * lcm / a.mau + b.tu * lcm / b.mau;
    RG(ans);
    ans = calc2(ans, ans);
    RG(ans);
    return ans;
}

void process(PhanSo &A, PhanSo &B)
{
    PhanSo C, D;
    C = calc1(A, B);
    D = calc2(A, calc2(B, C));
    cout << C.tu << '/' << C.mau << ' ' << D.tu << '/' << D.mau << endl;
}

int main()
{
    int t;
	cin >> t;
	while(t--)
    {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
    return 0;
}
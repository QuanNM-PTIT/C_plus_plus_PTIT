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

struct SinhVien
{
    string msv, name, lop, bd;
    float gpa;
};

void nhapThongTinSV(SinhVien &a)
{
    a.msv = "N20DCCN001";
    getline(cin, a.name);
    cin >> a.lop >> a.bd >> a.gpa;
    if(a.bd[1] == '/') a.bd = "0" + a.bd;
    if(a.bd[4] == '/') a.bd.insert(a.bd.begin() + 3, '0');
}

void inThongTinSV(SinhVien &a)
{
    cout << a.msv << ' ' << a.name << ' ' << a.lop << ' ' << a.bd << ' ' << setprecision(2) << fixed << a.gpa;
}

int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}

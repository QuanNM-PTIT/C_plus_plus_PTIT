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

struct matHang
{
    string tenMatHang, nhomHang;
    double giaMua, giaBan, loiNhuan;
    int ma;
};

bool cmp(matHang a, matHang b)
{
    return a.loiNhuan > b.loiNhuan;
}

int main()
{
    faster();
    int n;
    cin >> n;
    matHang a[n];
    F(i, 0, n)
    {
        cin.ignore();
        getline(cin, a[i].tenMatHang);
        getline(cin, a[i].nhomHang);
        cin >> a[i].giaMua >> a[i].giaBan;
        a[i].loiNhuan = a[i].giaBan - a[i].giaMua;
        a[i].ma = i + 1;
    }
    sort(a, a + n, cmp);
    F(i, 0, n) cout << a[i].ma << ' ' << a[i].tenMatHang << ' ' << a[i].nhomHang << ' ' << setprecision(2) << fixed << a[i].loiNhuan << endl;
    return 0;
}

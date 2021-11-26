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

class SinhVien
{
    public:
    string msv, ten, lop, bd;
    float GPA;
    public:
    SinhVien()
    {
        this -> msv = "B20DCCN001";
        this -> ten = "";
        this -> lop = "";
        this -> bd = "";
        this -> GPA = 0;
    }
    void nhap()
    {
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, bd);
        cin >> GPA;
        if(bd[2] != '/') bd.insert(bd.begin(), '0');
        if(bd[5] != '/') bd.insert(bd.begin() + 3, '0');
    }
    void xuat()
    {
        cout << msv << ' ' << ten << ' ' << lop << ' ' << bd << ' ' << setprecision(2) << fixed << GPA;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

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
#define a() a

class SinhVien
{
    private:
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
    friend istream &operator >> (istream &is, SinhVien &a)
    {
        getline(is, a.ten);
        getline(is, a.lop);
        getline(is, a.bd);
        is >> a.GPA;
        if(a.bd[2] != '/') a.bd.insert(a.bd.begin(), '0');
        if(a.bd[5] != '/') a.bd.insert(a.bd.begin() + 3, '0');
        return is;
    }
    friend ostream &operator << (ostream &os, SinhVien &a)
    {
        os << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' << a.bd << ' ' << setprecision(2) << fixed << a.GPA;
        return os;
    }
};

int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}

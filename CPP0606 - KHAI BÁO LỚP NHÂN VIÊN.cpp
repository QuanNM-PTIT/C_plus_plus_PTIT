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
#define a() a;

class NhanVien
{
    private:
        string mnv, name, sex, bd, add, mst, date;
    public:
    friend istream &operator >> (istream &is, NhanVien &a)
    {
        a.mnv = "00001";
        getline(is, a.name);
        getline(is, a.sex);
        getline(is, a.bd);
        getline(is, a.add);
        getline(is, a.mst);
        getline(is, a.date);
        return is;
    }
    friend ostream &operator << (ostream &os, NhanVien &a)
    {
        os << a.mnv << ' ' << a.name << ' ' << a.sex << ' ' << a.bd << ' ' << a.add << ' ' << a.mst << ' ' << a.date;
        return os;
    }
};

int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
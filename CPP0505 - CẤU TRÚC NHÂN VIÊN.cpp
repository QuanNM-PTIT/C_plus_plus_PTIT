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

int cnt = 0;

struct NhanVien
{
    string name, sex, bd, add, msThue, date, ms;
    
};

void nhap(NhanVien &A)
{
    getline(cin, A.name);
    getline(cin, A.sex);
    getline(cin, A.bd);
    getline(cin, A.add);
    getline(cin, A.msThue);
    getline(cin, A.date);
}

void in(NhanVien A)
{
    cout << "00001" << ' ' << A.name << ' ' << A.sex << ' ' << A.bd << ' ' << A.add << ' ' << A.msThue << ' ' << A.date;
}

int main()
{
    faster();
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}


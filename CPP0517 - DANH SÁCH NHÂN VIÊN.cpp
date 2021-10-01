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
    ++cnt;
    if(cnt == 1) cin.ignore();
    getline(cin, A.name);
    getline(cin, A.sex);
    getline(cin, A.bd);
    getline(cin, A.add);
    getline(cin, A.msThue);
    getline(cin, A.date);
    if(cnt < 10) A.ms = "0000" + to_string(cnt);
    else A.ms = "000" + to_string(cnt);
}

void inds(NhanVien ds[], int n)
{
    F(i, 0, n) cout << ds[i].ms << ' ' << ds[i].name << ' ' << ds[i].sex << ' ' << ds[i].bd << ' ' << ds[i].add << ' ' << ds[i].msThue << ' ' << ds[i].date << endl;
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

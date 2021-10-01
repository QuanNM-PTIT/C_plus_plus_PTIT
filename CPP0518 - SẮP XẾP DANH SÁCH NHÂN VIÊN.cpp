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
#define nv NhanVien

struct nv
{
    string mnv, name, sex, bd, add, mst, date, d, m, y;
};

int cnt = 0;

void nhap(nv &a)
{
    ++cnt;
    cin.ignore();
    if(cnt < 10) a.mnv = "0000" + to_string(cnt);
    else a.mnv = "000" + to_string(cnt);
    getline(cin, a.name);
    getline(cin, a.sex);
    getline(cin, a.bd);
    stringstream ss(a.bd);
    getline(ss, a.m, '/');
    getline(ss, a.d, '/');
    getline(ss, a.y, '/');
    getline(cin, a.add);
    getline(cin, a.mst);
    cin >> a.date;
}

bool cmp(nv &a, nv &b)
{
    if(a.y > b.y) return 0;
    if(a.y < b.y) return 1;
    if(a.m > b.m) return 0;
    if(a.m < b.m) return 1;
    if(a.d > b.d) return 0;
    return 1;
}

void sapxep(nv a[], int n)
{
    sort(a, a + n, cmp);
}

void inds(nv a[], int n)
{
    F(i, 0, n) cout << a[i].mnv << ' ' << a[i].name << ' ' << a[i].sex << ' ' << a[i].bd << ' ' << a[i].add << ' ' << a[i].mst << ' ' << a[i].date << endl;
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

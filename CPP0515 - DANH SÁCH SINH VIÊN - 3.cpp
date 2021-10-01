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

struct SinhVien
{
    string ten, lop, ns, masv;
    float s;
};

void dev(string a,vector <string> &b)
{
    string x = "";
    F(i, 0, a.sz)
    {
        if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
        if(a[i] == ' ')
        {
            b.pb(x);
            x = "";
        }
        else x = x + a[i];
    }
    b.pb(x);
}

bool cmp(SinhVien a,SinhVien b)
{
    return a.s > b.s;
}

void chuanhoa(string a)
{
    vector<string> b;
    dev(a, b);
    F(i, 0, b.sz)
    {
        if(b[i] != "")
        {
            b[i][0] -= 32;
            cout << b[i] << " ";
        }
    }
}

void nhap(SinhVien a[],int n)
{
    F(i, 0, n)
    {
        scanf("\n");
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].s;
        if(a[i].ns[1] == '/') a[i].ns.insert(0, 1, '0');
        if(a[i].ns[4] == '/') a[i].ns.insert(3, 1, '0');
        if(i < 9) a[i].masv = "B20DCCN00";
        else a[i].masv = "B20DCCN0";
        a[i].masv = a[i].masv + to_string(i + 1);
    }
}

void sapxep(SinhVien a[],int n)
{
    sort(a, a + n, cmp);
}

void in(SinhVien a[],int n)
{
    F(i, 0, n)
    {
        cout << a[i].masv << " ";
        chuanhoa(a[i].ten);
        cout << a[i].lop << " " << a[i].ns << " ";
        printf("%.2f\n", a[i].s);
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

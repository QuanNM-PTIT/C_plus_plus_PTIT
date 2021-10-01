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

struct ThiSinh
{
    string name, bd;
    float d1, d2, d3, td;
};

void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    getline(cin, A.bd);
    cin >> A.d1 >> A.d2 >> A.d3;
    A.td = A.d1 + A.d2 + A.d3;
}

void in(ThiSinh &A)
{
    cout << A.name<< ' ' << A.bd << ' ' << setprecision(1) << fixed << A.td;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}


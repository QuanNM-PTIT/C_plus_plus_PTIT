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

struct Data
{
    string name, d, m, y;
};

bool cmp(Data &a, Data &b)
{
    if(a.y > b.y) return 1;
    if(a.y < b.y) return 0;
    if(a.m > b.m) return 1;
    if(a.m < b.m) return 0;
    if(a.d > b.d) return 1;
    return 0;
}

int main()
{
    faster();
    int n;
    cin >> n;
    Data a[n];
    F(i, 0, n)
    {
        cin >> a[i].name;
        string s;
        cin >> s;
        stringstream ss(s);
        getline(ss, a[i].d, '/');
        getline(ss, a[i].m, '/');
        getline(ss, a[i].y, '/');
    }
    sort(a, a + n, cmp);
    cout << a[0].name << endl << a[n - 1].name;
    return 0;
}
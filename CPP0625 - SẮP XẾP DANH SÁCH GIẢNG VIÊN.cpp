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

struct gv
{
    string name, sj, mgv, lastName, msj;
};
bool cmp(gv &a, gv &b)
{
    if(a.lastName == b.lastName) return a.mgv < b.mgv;
    return a.lastName < b.lastName;
}
int main()
{
    faster();
    int n;
    cin >> n;
    gv a[n];
    cin.ignore();
    F(i, 0, n)
    {
        getline(cin, a[i].name);
        getline(cin, a[i].sj);
        if(i < 9) a[i].mgv = "GV0";
        else a[i].mgv = "GV";
        a[i].mgv += to_string(i + 1);
        int len = a[i].name.length(), x;
        a[i].lastName = "";
        a[i].msj = "";
        a[i].msj += a[i].sj[0];
        F(j, 0, a[i].sj.length()) if(isblank(a[i].sj[j])) a[i].msj += toupper(a[i].sj[j + 1]);
        FORD(j, len - 1, 0)
        {
            if(isblank(a[i].name[j]))
            {
                x = j;
                break;
            }
        }
        F(j, x + 1, len) a[i].lastName += a[i].name[j];
    }
    sort(a, a + n, cmp);
    F(i, 0, n) cout << a[i].mgv << ' ' << a[i].name << ' ' << a[i].msj << endl;
    return 0;
}

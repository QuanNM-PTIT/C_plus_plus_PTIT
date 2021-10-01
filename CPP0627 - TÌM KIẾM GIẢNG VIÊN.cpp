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
    string mgv, name, sj, msj, xName;
};

int main()
{
    faster();
    int n;
    cin >> n;
    gv a[n];
    cin.ignore();
    F(i, 0, n)
    {
        if(i < 9) a[i].mgv = "GV0";
        else a[i].mgv = "GV";
        a[i].mgv += to_string(i + 1);
        getline(cin, a[i].name);
        stringstream ss(a[i].name);
        a[i].xName = "";
        string s;
        while(ss >> s)
        {
            F(i, 0, s.length()) s[i] = tolower(s[i]);
            a[i].xName += s;
            a[i].xName += ' ';
        }
        a[i].xName.erase(a[i].xName.end() - 1);
        getline(cin, a[i].sj);
        a[i].msj = "";
        a[i].msj += a[i].sj[0];
        F(j, 0, a[i].sj.length()) if(isblank(a[i].sj[j])) a[i].msj += toupper(a[i].sj[j + 1]);
    }
    int t;
    cin >> t;
    string s;
    cin.ignore();
    while(t--)
    {
        getline(cin, s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ':' << endl;
        F(i, 0, s.length()) s[i] = tolower(s[i]);
        vector<string> vs;
        stringstream ss(s);
        while(ss >> s) vs.pb(s);
        F(i, 0, n)
        {
            F(j, 0, vs.sz)
            {
                if(a[i].xName.find(vs[j]) != -1)
                {
                    cout << a[i].mgv << ' ' << a[i].name << ' ' << a[i].msj << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

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

int main()
{
    string s;
    vector<string> vs;
    while(cin >> s) vs.pb(s);
    for(int i = 0; i < vs.sz; ++i) F(j, 0, vs[i].length()) vs[i][j] = tolower(vs[i][j]); 
    bool check = 1;
    for(string i : vs)
    {
        if(i[i.length() - 1] == '.' || i[i.length() - 1] == '?' || i[i.length() - 1] == '!')
        {
            if(check) i[0] = toupper(i[0]);
            i.erase(i.end() - 1);
            if(i != "") cout << i;
            cout << endl;
            check = 1;
        }
        else
        {
            if(check)
            {
                i[0] = toupper(i[0]);
                cout << i << ' ';
                check = 0;
            }
            else cout << i << ' ';
        }
    }
    return 0;
}
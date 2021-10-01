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

int main()
{
    faster();
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        string num = "";
        string test = "";
        F(i, 0, s.length())
        {
            if(islower(s[i])) s[i] = toupper(s[i]);
            if(s[i]=='A'||s[i]=='B'||s[i]=='C') num += '2';
            else if(s[i]=='D'||s[i]=='E'||s[i]=='F') num += '3';
            else if(s[i]=='G'||s[i]=='H'||s[i]=='I') num += '4';
            else if(s[i]=='J'||s[i]=='K'||s[i]=='L') num += '5';
            else if(s[i]=='M'||s[i]=='N'||s[i]=='O') num += '6';
            else if(s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S') num += '7';
            else if(s[i]=='T'||s[i]=='U'||s[i]=='V') num += '8';
            else if(s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z') num += '9';
        }
        FORD(i, num.length() - 1, 0) test += num[i];
        if(test == num) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

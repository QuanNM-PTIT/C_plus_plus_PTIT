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

int calc(string &s)
{
    int num = 0;
    F(i, 0, s.length())
    {
        num *= 10;
        num += s[i] - '0';
    }
    return num;
}

int main()
{
    faster();
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        int sum = 0;
        cin >> s;
        string tmp = "";
        F(i, 0, s.length())
        {
            if(isdigit(s[i])) tmp += s[i];
            else
            {
                if(!tmp.empty())
                {
                    sum += calc(tmp);
                    tmp = "";
                }
            }
        }
        if(!tmp.empty()) sum += calc(tmp);
        cout << sum << endl;
    }
    return 0;
}

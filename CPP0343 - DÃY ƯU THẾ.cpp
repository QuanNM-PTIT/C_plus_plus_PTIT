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

bool check(string &a)
{
    return a[a.length() - 1] & 1;
}

int main()
{
    faster();
    int t;
    cin >> t;
    string s, x;
    cin.ignore();
    while(t--)
    {
        int c = 0, l = 0;
        getline(cin, s);
        stringstream ss(s);
        int len = 0;
        while(ss >> x)
        {
            if(check(x)) ++l;
            else ++c;
            ++len;
        }
        if((len & 1 && l > c) || (!(len & 1) && c > l)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}



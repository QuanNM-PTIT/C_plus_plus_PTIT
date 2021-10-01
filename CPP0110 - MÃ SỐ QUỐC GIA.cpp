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
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        int len = s.length() - 2;
        F(i, 0, len)
        {
            if(s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
            {
                s[i] = s[i + 1] = s[i + 2] = '\0';
                break;
            }
        }
        F(i, 0, s.length()) if(s[i] != '\0') cout << s[i];
        cout << endl;
    }
    return 0;
}

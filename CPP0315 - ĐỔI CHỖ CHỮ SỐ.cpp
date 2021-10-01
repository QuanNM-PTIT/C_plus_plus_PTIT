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
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

bool check(string &s)
{
    for(int i = 1; i < s.length(); ++i) if (s[i] < s[i-1]) return 1;
    return 0;
}

bool check0(string &s)
{
    return s[0] != '0';
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(!check(s))
        {
            cout << -1 << endl;
            continue;
        }
        int index = s.length() - 1;
        FORD(i, s.length() - 1, 1)
        {
            if(s[i - 1] > s[i])
            {
                index = i;
                break;
            }
        }
        int move = index;
        char maxx = s[index];
        FOR(i, index + 1, s.length() - 1)
        {
            if (s[i] > maxx && s[i] < s[index-1])
            {
                move = i;
                maxx = s[i];
            }
        }
        swap(s[index - 1], s[move]);
        if (!check0(s)) cout << -1 << endl;
        else cout << s << endl;
    }
    return 0;
}

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
#define vb vector<bool>
#define endl '\n'

bool check(string &s, int &k)
{
    if(s.length() < 26) return 0;
    int dd[30] = {};
    for(int i = 0; i < s.length(); ++i) dd[s[i] - 'a']++;
    int cnt = 0;
    FOR(i, 0, 25) if(!dd[i]) cnt++;
    return cnt <= k;
}

int main()
{
    faster();
    int t, k;
    cin >> t;
    while(t--)
    {
        cin.ignore();
        string s;
        getline(cin, s);
        cin >> k;
        cout << check(s, k) << endl;
    }
    return 0;
}

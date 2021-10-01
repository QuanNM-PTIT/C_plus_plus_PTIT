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

string solve(string &s)
{
    int dd[10] = {};
    int cntOdd = 0, cnt = 0, idxMax = -1, maxOdd = 0;
    F(i, 0, s.length()) ++dd[s[i] - '0'];
    F(i, 0, 10)
    {
        if(dd[i]) ++cnt;
        if(dd[i] & 1)
        {
            ++cntOdd;
            if(dd[i] >= maxOdd)
            {
                maxOdd = dd[i];
                idxMax = i;
            }
        }
    }
    if(cntOdd == cnt)
    {
        int p, tmp = 0;
        F(i, 1, 10)
        {
            if(dd[i] >= tmp)
            {
                tmp = dd[i];
                p = i;
            }
        }
        string res = string(dd[p], p + '0');
        return res;
    }
    string res = "";
    FORD(i, 9, 0) if(!(dd[i] & 1)) res += string(dd[i] >> 1, '0' + i);
    if(res[0] == '0') res = "";
    string tmp = res;
    reverse(res.begin(), res.end());
    if(idxMax != -1) tmp = tmp + string(dd[idxMax], '0' + idxMax) + res;
    else tmp = tmp + res;
    return tmp;
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
        cout << solve(s) << endl;
    }
    return 0;
}

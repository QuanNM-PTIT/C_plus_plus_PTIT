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

string de101 = "ABBADCCABDCCABD", de102 = "ACCABCDDBBCDDBB";

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        char s;
        int n;
        cin >> n;
        int cnt = 0;
        if(n == 101)
        {
            FOR(i, 0, 14)
            {
                cin >> s;
                if(s == de101[i]) ++cnt;
            }
        }
        else
        {
            FOR(i, 0, 14)
            {
                cin >> s;
                if(s == de102[i]) ++cnt;
            }
        }
        cout << setprecision(2) << fixed << 10.0 / 15 * cnt << endl;
    }
    return 0;
}


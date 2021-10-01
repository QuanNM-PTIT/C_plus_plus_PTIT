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

int main()
{
    //faster();
    int t;
    cin >> t;
    scanf("\n");
    while(t--)
    {
        char s[100005];
        fgets(s, 100000, stdin);
        int cnt = 0;
        s[strlen(s) - 1] = '\0';
        char *p = strtok(s, " \t\n");
        while(p != NULL)
        {
            cnt++;
            p = strtok(NULL, " \t\n");
        }
        cout << cnt << endl;
    }
    return 0;
}

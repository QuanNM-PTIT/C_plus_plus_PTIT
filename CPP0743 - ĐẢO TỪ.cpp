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

int main()
{
    faster();
    int t;
    scanf("%d\n", &t);
    while(t--)
    {
        char s[1005];
        fgets(s, 1005, stdin);
        char ans[1005][1005];
        int idx = 0;
        s[strlen(s) - 1] = '\0';
        char *p = strtok(s, " ");
        while(p != NULL)
        {
            strcpy(ans[idx++], p);
            p = strtok(NULL, " ");
        }
        for(int i = idx - 1; i >= 0; --i) cout << ans[i] << ' ';
        cout << endl;
    }
    return 0;
}

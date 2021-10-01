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
    char s[105];
    char tok[105][105];
    fgets(s, 105, stdin);
    char *p = strtok(s, " \n");
    int idx = 0;
    while(p != NULL)
    {
        strcpy(tok[idx++], p);
        p = strtok(NULL, " \n");
    }
    for(int i = 0; i < idx - 1; ++i)
    {
        for(int j = 0; j < strlen(tok[i]); ++j)
        {
            if(j > 0) tok[i][j] = tolower(tok[i][j]);
            else tok[i][j] = toupper(tok[i][j]);
        }
    }
    for(int i = 0; i < strlen(tok[idx - 1]); ++i) tok[idx - 1][i] = toupper(tok[idx - 1][i]);
    for(int i = 0; i < idx - 2; ++i) cout << tok[i] << ' ';
    cout << tok[idx - 2] << ", " << tok[idx - 1];
    return 0;
}


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
    int t;
    scanf("%d\n", &t);
    char name[105][55];
    int idxName = 0;
    while(t--)
    {
        char s[55], tmp[55][55];
        fgets(s, 55, stdin);
        char *p;
        p = strtok(s, " \n");
        int idx = 0;
        while(p != NULL)
        {
            strcpy(tmp[idx++], p);
            p = strtok(NULL, " \n");
        }
        for(int i = 0; i < idx; ++i)
        {
            int len = strlen(tmp[i]);
            for(int j = 0; j < len; ++j) tmp[i][j] = tolower(tmp[i][j]);
        }
        strcpy(name[idxName++], tmp[idx - 1]);
        int cnt = 0;
        for(int i = 0; i < idxName; ++i) if(strcmp(tmp[idx - 1], name[i]) == 0) cnt++;
        printf("%s", tmp[idx - 1]);
        idx--;
        for(int i = 0; i < idx; ++i) printf("%c", tmp[i][0]);
        if(cnt > 1) printf("%d", cnt);
        printf("@ptit.edu.vn");
        printf("\n");
    }
    return 0;
}

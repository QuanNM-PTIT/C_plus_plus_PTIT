// Created by Nguyễn Mạnh Quân

#include<stdio.h>

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)

const int mod = 1e9 + 7;
int F[1005];

void Pre()
{
    F[0] = 0;
    F[1] = 1;
    FOR(i, 2, 1000) F[i] = (F[i-1] % mod + F[i-2] % mod) % mod;
}
int main()
{
    Pre();
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", F[n]);
    }
    return 0;
}

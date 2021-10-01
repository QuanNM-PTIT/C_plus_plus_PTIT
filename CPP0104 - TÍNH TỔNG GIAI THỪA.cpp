// Created by Nguyễn Mạnh Quân

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long giaiThua[n + 1];
    giaiThua[1] = 1;
    long long sum = 1;
    for(int i = 2; i <= n; ++i)
    {
        giaiThua[i] = giaiThua[i - 1] * i;
        sum += giaiThua[i];
    }
    printf("%lld", sum);
    return 0;
}

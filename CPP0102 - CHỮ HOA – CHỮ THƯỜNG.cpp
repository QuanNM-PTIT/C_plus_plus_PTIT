// Created by Nguyễn Mạnh Quân

#include<stdio.h>

int main()
{
    int t;
    char c;
    scanf("%d", &t);
    while(t--)
    {
        scanf("\n%c", &c);
        c ^= ' ';
        printf("%c\n", c);
    }
    return 0;
}

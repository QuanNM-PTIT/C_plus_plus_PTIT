#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < (1<<n); ++i)
        {
            for(int j = n - 1; j >= 0; --j) printf("%d", (i >> j) & 1);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

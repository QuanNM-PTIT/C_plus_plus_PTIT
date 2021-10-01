#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d\n", &t);
    while(t--)
    {
        char a[205][205], b[205][205], s1[205], s2[205], ans[205][205];
        fgets(s1, 205, stdin);
        fgets(s2, 205, stdin);
        int idx1 = 0, idx2 = 0, idxans = 0;
        char *p = strtok(s1, " \n");
        while(p != NULL)
        {
            strcpy(a[idx1++], p);
            p = strtok(NULL, " \n");
        }
        p = strtok(s2, " \n");
        while(p != NULL)
        {
            strcpy(b[idx2++], p);
            p = strtok(NULL, " \n");
        }
        for(int i = 0; i < idx1; ++i)
        {
            bool check = 1;
            for(int j = 0; j < idx2; ++j)
            {
                if(strcmp(a[i], b[j]) == 0)
                {
                    check = 0;
                    break;
                }
            }
            if(check)
            {
                for(int z = 0; z < i; ++z)
                {
                    if(strcmp(a[i], a[z]) == 0)
                    {
                        check = 0;
                        break;
                    }
                }
                if(check) strcpy(ans[idxans++], a[i]);
            }
        }
        for(int i = 0; i < idxans; ++i)
        {
            for(int j = i + 1; j < idxans; ++j)
            {
                if(strcmp(ans[i], ans[j]) > 0)
                {
                    char tmp[205];
                    strcpy(tmp, ans[i]);
                    strcpy(ans[i], ans[j]);
                    strcpy(ans[j], tmp);
                }
            }
        }
        for(int i = 0; i < idxans; ++i) printf("%s ",ans[i]);
        printf("\n");
    }
    return 0;
}

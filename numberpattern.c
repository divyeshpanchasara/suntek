#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0)
                printf("*");
            else
                printf("%d",j);
        }
        for(int j=i-1;j>=0;j--)
        {
            if(j==0)
                printf("*");
            else
                printf("%d",j);
        }
        printf("\n");
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0)
                printf("*");
            else
                printf("%d",j);
        }
        for(int j=i-1;j>=0;j--)
        {
            if(j==0)
                printf("*");
            else
                printf("%d",j);
        }
        printf("\n");
    }
}  
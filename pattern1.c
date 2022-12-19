#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int space=0;space<n-i;space++)
            printf("_");
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
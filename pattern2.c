#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int space=0;space<n-i;space++)
            printf(" ");
        for(int j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
}
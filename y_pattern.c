#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=(n/2)+1;i>=1;i--)
    {
        for(int space=0;space<(n/2)+1-i;space++)
            printf(" ");
        for(int j=1;j<=2*i-1;j++)
        {
            if(j==1||j==2*i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(int i=1;i<(n/2);i++)
    {
        for(int space=0;space<n/2;space++)
            printf(" ");
        printf("*\n");
    }
}
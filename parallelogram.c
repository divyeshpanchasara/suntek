#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int space=0;space<i-1;space++)
            printf(" ");
        for(int j=n;j>=1;j--)
            printf("*");
        printf("\n");
    }
}
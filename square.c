#include<stdio.h>
void main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    for(int i=r;i>=1;i--)
    {
        for(int j=c;j>=1;j--)
            printf("*");
        printf("\n");
    }
}
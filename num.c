#include<stdio.h>
void main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(int i=0;i<b;i++)
        c=c+a;
    printf("%d",c);
}
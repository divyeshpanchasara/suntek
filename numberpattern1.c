#include<stdio.h>
void main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        k=i;
        for(int space=0;space<n-i;space++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("%d",k++);
        k=k-2;
        for(int j=k;j>=i;j--)
            printf("%d",k--);
        printf("\n");
    }
}
#include<stdio.h>
void main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int k=n1;
    for(int i=n2;i>=n2-n1+1;i--)
    {
        for(int j=n2;j>=i;j--)
            printf("%d",j);
        for(int j=i;j>1;j--)
            printf("%d",k);
        k--;
        printf("\n");
    }
}
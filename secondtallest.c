#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n!=0)
    {
        long long int a[n];
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(int j=0;j<n;j++)
            for(int y=0;y<n-j-1;y++)
            {          
                if(a[y]>a[y+1])
                {               
                    int temp=a[y];
                    a[y]=a[y+1];
                    a[y+1]=temp;
                }
            }
            printf("%lld ",a[n-2]);
    }
    else
        printf("Heights not found\n");
}
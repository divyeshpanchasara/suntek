#include<stdio.h>
void main()
{
    int limit=41;
    int n,l,b,h;
    scanf("%d",&n);
    if(n>=1 && n<=100)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d%d%d",&l,&b,&h);
            if(h<limit)
                printf("%d",l*b*h);
        }
    }
}
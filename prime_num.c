#include<stdio.h>
int isprime(int x)
{
    int count=0;
    for(int m=1;m<=x;m++)
    {
        if(x%m==0)
            count++;
    }
    if(count==2)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int count=1;
    for(int i=1;;i++)
    {
        if(count<=n)
        {
            int t=isprime(i);
            if(t==1)
            {
                printf("%d ",i);
                count++;
            }
        }
        else 
            break;
    }
    getch();
    return 0;
}
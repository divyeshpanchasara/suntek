#include<stdio.h>
void main()
{
    int num,sum=0;
    scanf("%d",&num);
    int a[1000];
    for(int i=1;i<num;i++)
    {
        int l=i;
        if(num%i==0)
        {
            a[i]=l;
            sum=sum+a[i];
        }
    }
    if (sum==num)
        printf("Perfect Number");
    else
        printf("Not a Perfect number");
}
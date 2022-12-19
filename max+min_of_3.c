#include<stdio.h>
void main()
{
    int a[3];
    for(int i=0;i<3;i++)
        scanf("%d",&a[i]);
    int max=a[2],min=a[0];
    for(int i=0;i<3;i++)
    {
        if(max>a[i])
            max=max;
        else
            max=a[i];
        if(min<a[i])
            min=min;
        else
            min=a[i];
    }
    printf("%d %d",min,max);
}
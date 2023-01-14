#include<stdio.h>
int asci(char x)
{
    return "%d",x;
}
void main()
{
    char a[26],b[26];
    scanf("%s%s",a,b);
    int sum1=0,sum2=0;
    for(int i=0;a[i]!=0;i++)
    {
        sum1+=asci(a[i]);
    }
    for(int i=0;b[i]!=0;i++)
    {
        sum2+=asci(b[i]);
    }
    printf("%d %d\n",sum1,sum2);
    if(sum1>=sum2)
        printf("%s\n",a);
    else
        printf("%s\n",b);
}
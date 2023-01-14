#include<stdio.h>
void main()
{
    char c[25];
    scanf("%[^\n]s",c);
    int total=0,count=0;
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]==32)
            count++;
        if(c[i]>=48 && c[i]<=57)
            total=total+c[i]-48;
            //printf("%d\n",total);
    }
    //printf("%d\n",count);
    printf("%d",total);
}
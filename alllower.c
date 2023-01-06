#include<stdio.h>
void main()
{
    
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]>=65 && c[i]<=90)
            c[i]=c[i]+32;
        else
            c[i]=c[i];
    }
    printf("%s",c);
}
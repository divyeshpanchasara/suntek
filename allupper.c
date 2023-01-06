#include<stdio.h>
void main()
{
    char c[25];
    scanf("%[^\n]s",c);
    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]>=97 && c[i]<=122)
            c[i]=c[i]-32;
        else
            c[i]=c[i];
    }
    printf("%s",c);
}
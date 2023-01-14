#include<stdio.h>
void main()
{
    char a[100],b[100];
    scanf("%[^\n]",a);
    int count=0;
    for(int i=0;a[i]!='\0';i++)
        count++;
    for(int j=0;j<count;j++)
        b[j]=a[j];
    for(int j=0;j<count;j++)
      printf("%c",b[j]);
}
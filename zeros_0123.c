#include<stdio.h>
void main()
{
    char a[50];
    scanf("%[^\n]s",a);
    int c0=0,c1=0,c2=0,c3=0;
    for(int j=0;a[j]!='\0';j++)
    {
        int k=a[j];
        switch(k)
        {
            case '0':
                c0++;
                break;
            case '1':
                c1++;
                break;
            case '2':
                c2++;
                break;
            case '3':
                c3++;
                break;
        }
    }
    printf("%d %d %d %d",c0,c1,c2,c3);
}
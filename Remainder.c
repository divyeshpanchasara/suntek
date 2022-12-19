#include<stdio.h>
void main()
{
    float a,b,q,r;
    scanf("%f%f",&a,&b);
    q=(a/b);
    r=(a-(q*b))/b;
    printf("%f",r);
}
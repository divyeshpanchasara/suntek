#include<stdio.h>
void main()
{
    float a,b,c,disc,k;
    scanf("%d%d%d",&a,&b,&c);
    k=((b*b)-(4*a*c));
    disc=sqrt(k);
    if(disc>=0)
    {
        float x1,x2;
        x1=(-b+disc)/(2*a);
        x2=(-b-disc)/(2*a);
        printf("%0.1f\n%0.1f",x1,x2);
    }
    else
        printf("roots are imaginary");
}
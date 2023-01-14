#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=2;
    while(i<=n+2)
    {
        if(i==2)
            printf("5\n");
        if(i%2!=0)
            printf("%d\n",((i*i)+1));
        i++;
    }
    return 0;
}
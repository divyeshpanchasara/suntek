#include <stdio.h>
int findGCD(int a, int b)
{
    if(b==0)
        return a;
    return findGCD(b, a%b);
}
void main() 
{
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        int lcm = a[0];;
        int  gcd = a[0];
        for(int i=0; i<n; i++)
        {
            gcd = findGCD(a[i], lcm);
            lcm = (lcm*a[i])/gcd;
        }
        printf("%d", lcm);
        t--;
    }
}

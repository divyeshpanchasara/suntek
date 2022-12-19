#include<stdio.h>
void main()
{
    int N;
    float sum=0;
    scanf("%d",&N);
    if(N>=1 && N<=1000)
    {
        float sum=0,num_array[N];
        for(int i=0;i<N;i++)
            scanf("%f",&num_array[i]);
        for(int i=0;i<N;i++)
            sum=sum+num_array[i];
        printf("%f",sum/N);
    }
}
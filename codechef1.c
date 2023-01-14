#include <stdio.h>

int main(void) 
{
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
	    int n;
	    scanf("%d",n);
	    if(n<=30)
	        printf("no\n");
	    else
	        printf("yes\n");
	    t--;
	}
	return 0;
}


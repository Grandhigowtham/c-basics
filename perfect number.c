//perfect number//
//a numbern can be called as perfect if it is equal to t0 the sum of its proper factors//
#include<stdio.h>
main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)//6
	{
		if(n%i==0)
		{
			sum +=i;
		}
	}
	
	if(sum==n)
	{
		printf("perfect");
		
	}
	else
	{
		printf("not perfect");
	}
}

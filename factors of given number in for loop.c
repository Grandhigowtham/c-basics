//write a c program to print the factors of given number//
#include<stdio.h>
main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		    printf("%d ",i);	
		}
	}
}

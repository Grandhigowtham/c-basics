//duck number//
//if a number is containing 0 in it.then it can be called as duck number//
#include<stdio.h>
main()
{
	int n,r,z=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r==0)
		{
			z++;
			break;
		}
		n=n/10;
	}
	if(z==1)
	{
		printf("duck number");
	}
	else
	{
		printf("not a duck number");
	}
		
}

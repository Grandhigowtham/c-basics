#include<stdio.h>
main()
{
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	b=a%2;
	if(b==0)
	{
		printf("even number");
		
	}
	else
	{
		printf("odd number");
		
	}
}

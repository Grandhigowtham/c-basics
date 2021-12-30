#include<stdio.h>
main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if(a%1==0)
	{
		printf("divisible by 1\n");
	}
	 if(a%2==0)
	{
		printf("divisible by 2\n");
	}
     if(a%3==0)
	{
		printf("divisible by 3\n");
	}
	 if(a%4==0)
	{
		printf("divisible by 4\n");
	}
	 if(a%5==0)
	{
		printf("divisible by 5\n");
	}
	 if(a%6==0)
	{
		printf("divisible by 6\n");
	}
	 if(a%7==0)
	{
		printf("divisible by 7\n");
	}
	 if(a%8==0)
	{
		printf("divisible by 8\n");
	}
	 if(a%9==0)
	{
		printf("divisible by 9\n");
	}
	else
    {
    	printf("not divisible by any digit");
    }
	
}

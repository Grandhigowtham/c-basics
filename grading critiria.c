#include<stdio.h>
main()
{
	int a;
	printf("enter marks:");
	scanf("%d",&a);
	if(a>100)
	{
		printf("invalid marks");
	}
	else if(90<=a && a<100)
	{
		printf("o grade");
	}
	else if(80<=a && a<90)
	{
		printf("a grade");
	}
	else if(70<=a && a<80)
	{
		printf("b grade");
	}
	else if(60<=a && a<70)
	{
		printf("c grade");
	}
	else if(50<=a && a<60)
	{
		printf("d grade");
	}
	else
	{
		printf("fail");
	}
}

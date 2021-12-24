#include<stdio.h>
main()
{
	int cp,sp;
	printf("enter any two numbers:");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		printf("profit");
		
	}
	else if(cp>sp)
	{
		printf("loss");
	}
	else
	{
		printf("no prifit no loss");
		
	}
}

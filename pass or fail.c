#include<stdio.h>
main()
{
	int tel,hin,eng,math;
	printf("enter marks:");
	scanf("%d%d%d%d",&tel,&hin,&eng,&math);
	 if(tel>100 && hin>100 && eng>100 && math>100)
	{
		printf("invalid result");
	}
	else if(tel>=35 && hin>=35 && eng>=35 && math>=35)
	{
		printf("pass");
	}
	
	
	else
	{
		printf("fail");
	}
}

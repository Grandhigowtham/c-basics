#include<stdio.h>
main()
{
	int i=1,n;
	scanf("%d",&n);
	while(i<=n)//3
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
		i++;
	}
}

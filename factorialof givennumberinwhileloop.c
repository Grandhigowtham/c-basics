#include<stdio.h>
main()
{
	int n,i=1,product;
	scanf("%d",&n);
	while(i<=n && n<=13)
	{
		product *=i;
		i++;
	}
	printf("%d",product);
}

#include<stdio.h>
main()
{
	int num;
	printf("ENTER NUMBER:");
	scanf("%d",&num);
	if(num>0)
	{
	printf("%d is positive",num);
	}
	else
	{
		if(num<0)
		{
			printf("%d is negative",num);
		}
		else
		{
			printf("ZERO");
		}
	}
}

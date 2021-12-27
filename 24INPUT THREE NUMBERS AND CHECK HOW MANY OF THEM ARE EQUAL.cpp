#include<stdio.h>
main()
{   int a,b,c;
	printf("ENTER VALUES FOR a,b and c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&b==c)
	{
		printf("3");
	}
	else if(a==b||b==c||c==a)
	{
		printf("2");
	}
	else
	{
		printf("0");
	}
}

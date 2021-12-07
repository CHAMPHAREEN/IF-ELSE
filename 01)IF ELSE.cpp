#include<stdio.h>
main()
{   int a,b;
	printf("ENTER VALUES FOR a AND b:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("MINIMUM IS=%d",b);
	}
	else
	{
		printf("MINIMUM IS=%d",a);
	}
}

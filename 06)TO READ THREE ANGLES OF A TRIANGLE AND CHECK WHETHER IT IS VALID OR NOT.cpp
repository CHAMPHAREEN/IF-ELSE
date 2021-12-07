#include<stdio.h>
main()
{
	int a,b,c;
	printf("ENTER THREE ANGLES OF A TRIANGLE[DON'T ENTER 0]:");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("TRIANGLE IS VALID");
	}
	else
	   printf("TRIANGLE IS NOT VALID");
}

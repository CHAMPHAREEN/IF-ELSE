#include<stdio.h>
main()
{
	int a;
	printf("ENTER NUMBER:");
	scanf("%d",&a);
	if(a%5==0&&a%11==0)
	{
		printf("%d is divisible by 5 and 11",a);
	}
	else
	   printf("%d is not divisible by 5 and 11",a);
}

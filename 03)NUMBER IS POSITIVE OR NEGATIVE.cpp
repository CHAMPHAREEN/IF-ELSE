#include<stdio.h>
main()
{
	int a;
	printf("ENTER A NUMBER(DON'T ENTER 0):");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d IS POSITIVE",a);
	}
	else
	{
		printf("%d IS NEGATIVE",a);
	}
}

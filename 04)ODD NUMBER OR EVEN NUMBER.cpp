#include<stdio.h>
main()
{
	int a;
	printf("ENTER NUMBER(DON'T ENTER 0):");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d IS EVEN NUMBER",a);
	}
	else
	    printf("%d IS ODD NUMBER",a);
}

#include<stdio.h>
main()
{
	int a,b;
	printf("ENTER TWO NUMBERS:");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		printf("%d is minimum",a);
	}
    else
       printf("%d is minimum",b);
}

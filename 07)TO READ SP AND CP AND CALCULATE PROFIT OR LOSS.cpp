#include<stdio.h>
main()
{
	int SP,CP,C;
	printf("ENTER SELLING PRICE AND COST PRICE:");
    scanf("%d%d",&SP,&CP);
	C=SP-CP;
	if(C>0)
	{
		printf("PROFIT=%d",C);
	}
	else
	   printf("LOSS=%d",C);
} 

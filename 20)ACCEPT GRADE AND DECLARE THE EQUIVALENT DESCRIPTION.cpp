#include<stdio.h>
main()
{
	char gr;
	printf("ENTER THE GRADE ALPHABET[E,V,G,A OR F]:");
	scanf("%c",&gr);
	if(gr=='E')
	{
		printf("EXCELLENT");
	}
	if(gr=='V')
	{
		printf("VERY GOOD");
	}
	if(gr=='G')
	{
		printf("GOOD");
	}
	if(gr=='A')
	{
		printf("AVERAGE");
	}
	if(gr=='F')
	{
		printf("FAIL");
	}
}

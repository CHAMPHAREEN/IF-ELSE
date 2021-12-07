#include<stdio.h>
main()
{
	float t;
	printf("ENTER TEMPERATURE:");
	scanf("%f",&t);
	if(t<0)
	{
		printf("FREEZING WEATHER");
	}
	if(t>=0&&t<10)
	{
		printf("VERY COLD WEATHER");
	}
	if(t>=10&&t<20)
	{
		printf("COLD WEATHER");
	}
	if(t>=20&&t<30)
	{
		printf("NORMAL");
	}
	if(t>=30&&t<40)
	{
		printf("HOT");
	}
	if(t>=40)
	{
		printf("VERY HOT");
	}
}


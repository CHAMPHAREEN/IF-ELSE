#include<stdio.h>
main()
{
	int u;
	float cost,ebill,subcharge;
	printf("ENTER UNITS:");
	scanf("%d",&u);
	if(u>0&&u<=50)
	{
		cost=u*0.50;
	}
	else if(u>50&&u<=150)
	{
		cost=50*0.50+(u-50)*0.75;
	}
	else if(u>150&&u<=250)
	{
		cost=50*0.50+100*0.75+(u-150)*1.25;
	}
	else
	{
		cost=50*0.50+100*0.75+100*1.25+(u-250)*1.50;
	}
	subcharge=(20*cost)/100;
	ebill=cost+subcharge;
	printf("ELECTRICITY BILL=%f",ebill);
}

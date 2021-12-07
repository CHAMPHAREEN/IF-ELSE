#include<stdio.h>
main()
{
	float earnings,hourlyRate;
	int weeklyHours;
	printf("ENTER hourlyrate and weeklyhours:");
	scanf("%f%d",&hourlyRate,&weeklyHours);
	if(weeklyHours<=40)
	   {
	   	earnings=hourlyRate*weeklyHours;
      }
    else 
    {
    	earnings=40*hourlyRate+(weeklyHours-40)*hourlyRate*1.5;
	}
    printf("EARNINGS=%2.2f",earnings);	   
}

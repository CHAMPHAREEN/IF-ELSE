#include<stdio.h>
main()
{
	int bs,hra,da,gs;
	printf("ENTER BASIC SALARY:");
	scanf("%d",&bs);
    if(bs<=10000)
	{
		hra=(bs*20)/100;
		da=(bs*80)/100;
		}
    if(bs<=20000&&bs>10000)
	{
			hra=(bs*25)/100;
		    da=(bs*90)/100;  
		}	
	if(bs>20000)
	{
			hra=(bs*30)/100;
		    da=(bs*95)/100;
			}
			gs=bs+hra+da;		
	        printf("%d is the gross salary:",gs);
    	
}

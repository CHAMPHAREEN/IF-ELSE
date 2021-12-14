#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d;
	float r1,r2;
	printf("ENTER THE VALUES a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	if(d>0)
	{
		   printf("ROOTS ARE REAL=%f %f",r1,r2);
	}
	else if(d==0)
    {
    	printf("ROOTS ARE EQUAL=%f",r1);
	}	
	else
	{
	   printf("ROOTS ARE IMAGINARY");	
	}  
    
}

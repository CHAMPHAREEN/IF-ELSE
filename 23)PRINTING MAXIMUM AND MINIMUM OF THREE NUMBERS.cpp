#include<stdio.h>
main()
{
	int a,b,c,max,min;
	printf("ENTER THREE NUMBERS:");
	scanf("%d%d%d",&a,&b,&c);
	{
		if(a>b&&a>c)
	{
		max=a;
	}
	else if(b>c&&b>a)
	{
		max=b;
	}
	else
	{
		max=c;
	}
}
 {    
     if(a<b&&a<c)
     {
     	min=a;
	 }
	 else if(b<c&&b<a)
	 {
	 	min=b;
	 }
	 else 
	 {
	 	min=c;
	 }
}
    printf("THE MAXIMUM OF %d,%d,%d IS %d",a,b,c,max);
	printf("\nTHE MINIMUM OF %d,%d,%d IS %d",a,b,c,min);	
}

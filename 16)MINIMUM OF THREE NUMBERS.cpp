#include<stdio.h>
main()
{
	int a,b,c;
	printf("ENTER THREE NUMBERS:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		 {
		  printf("%d is minimum",a);
	}
   else
	   {
	   	 if(b<c)
	   	 {
			printf("%d is minimum",b);
	   }
	    else
	    {
	    	printf("%d is minimum",c);
		}
  }
}
}

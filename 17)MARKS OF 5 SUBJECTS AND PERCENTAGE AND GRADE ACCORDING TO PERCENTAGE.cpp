#include<stdio.h>
main()
{
	int a,b,c,d,e;
	float p;
	printf("ENTER MARKS IN 5 SUBJECTS:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	p=(a+b+c+d+e)/5;
	if(p>=90&&p<=100)
	{
		printf("A");
		} 
	if(p>=80&&p<90)
	{
	    printf("B");
		}
	if(p>=70&&p<80)
	{
		printf("C");
    }
	if(p>=40&&p<70)
	{
		printf("D");
     }
    if(p>=0&&p<40)
	    {
		printf("E"); 	                                               
    }
}

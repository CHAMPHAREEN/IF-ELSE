#include<stdio.h>
int main()
{
    int a,b,c,max,min,sum=0;
    printf("ENTER THREE NUMBERS:");
    scanf("%d%d%d",&a,&b,&c);
  {
    if(a>b&&a>c)
    {
        max=a;
    }
    else
    if(b>c&&b>a)
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
      else
      if(b<c&&b<a)
      {
          min=b;
      }
      else
      {
          min=c;
      }
  }
 sum=max+min;
 printf("%d",sum);
}

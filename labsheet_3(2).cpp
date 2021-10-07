#include<stdio.h>
int main()
{
	int a, b,c;
		printf("**ROSHAN DAHAL(BEL/32/2077)**\n");
	printf("Enter the values of a ,b, c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("%d is the greatest number\n",a);
		else
		printf("%d is the greatest number\n",c);
		
	}
      else
	  {
	  	if(b>c)
	  	printf("%d is the greatest number\n",b);
	  	else
	  		printf("%d is the greatest number\n",c);
	   } 
	   return 0;
 }


#include<stdio.h>
int main()
{
	int fact=1,i=1,num;
	printf("enter the value of  num\n");
       scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	fact=fact*i;
	
	}
	printf("the factorial of %d=%d",num,fact );
	return 0;
}
	

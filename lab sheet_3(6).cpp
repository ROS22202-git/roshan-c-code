#include<stdio.h>
int main()
{
	int num;
	printf("Enter the num\n");
	scanf("%d",&num);
	if(num%11==0 || num%5==0)
	{ 
	if(num%11==0 &&  num%5==0)
	{
	printf("%d is divisible by both 5 and 11",num);
	}
	else
	{
		if (num%5==0)
	{
	printf("%d is divisible by   5 0nly",num);
	}
	else
	{	printf("%d is divisible by  11 0nly",num);
	}
	}
}
	else
	{
	printf( "%d isnot divisible by 5 or11",num);
	
	}
	return 0;
}

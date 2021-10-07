#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,num,flag=0;
	printf("Enter the value of num\n");
	scanf("%d",&num);
	if(num>0) 
	{
		if(num==1 || num==2 )
		{
			if (num==1)
			{
			
			printf("%d is neither prime nor composite",num);
			exit(0);
		}
		else
		{
			printf("%d is only one smallest prime number",num);
			exit(0);
		}
		
		}
	}
		else
	{
			printf("%d is a number",num);
				exit(0);
	}
	
	
	for(i=2;i<=(num/2);i++)
	{
		if(num%i==0)
	{
			flag =1;
			
{
	printf("%d isnot prime number",num);
}
		break;
	}
}
	

if(flag==0)
{
	printf("%d is prime number",num);
	
}


return 0;
}

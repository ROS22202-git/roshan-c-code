// sum of  the digits of a number
#include<stdio.h>
int main()
{
	int sum=0, rem, num;
	

	printf("Enter the value of num\n");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("the value of sum=%d",sum);
}

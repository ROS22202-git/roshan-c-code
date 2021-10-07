//count the numbers of digits
#include<stdio.h>
int main()
{
	int count,num,original;
	printf("Enter the value of num\n");
	scanf("%d",&num);
	original=num;
	 while(num!=0)
	{
	 count++;

	printf("num=%d and count =%d\n",num,count);
		num/=10;
	
		
	}
	printf("the number of digits in %d=%d",original,count);
	return 0;
}

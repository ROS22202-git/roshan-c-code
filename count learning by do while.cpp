#include<stdio.h>
int main()
{
	int num, count=0,original;
	printf("Enter the value of num\n");
	scanf("%d",&num);
	original=num;
	do
	{
		count++;
		printf("num=%d\tcount=%d\n",num,count);
		num/=10;
	}
	while(num!=0);
	printf("the number of digits in %d=%d",original,count);
	return 0;
}

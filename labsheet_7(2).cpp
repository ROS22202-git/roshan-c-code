#include<stdio.h>
int main()
{
		int num[3],sum;
		float average;
	printf("enter 10 numbers\n");
	scanf("%d%d%d",&num[0],&num[1],&num[2]);
	sum=num[0]+num[1]+num[2];
	average=((float)num[0]+num[1]+num[2])/3;
	printf("the sum of 3 elements of array=%d\n",sum);
	printf("the average of 3 elements of array=%.2f",average);
	return 0;
}

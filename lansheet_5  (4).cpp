#include<stdio.h>
int main()
{
	 int n=1,num;
	float  sum=0;
	printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
	 printf("Enter the value of  num\n ");
	 scanf("%d",&num);
	 while(n<=num)
	 {
	 sum=sum+(float)1/n;
	 
	 	n++;
	 }
	 printf("the sum=%.2f",sum);
	 return 0;
}

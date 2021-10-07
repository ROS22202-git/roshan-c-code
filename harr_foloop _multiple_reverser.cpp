#include<stdio.h>
int main()
{
       
	int n,mul,i,num;
	printf("enter the value of n and num\n");
	scanf("%d%d",&n,&num);
		printf("multiple of %d\n",n);
		for(i=10;i<=num && i>=1 ;i--)
		{
			mul=n*i;
			printf("%d*%d=%d\n",n,i,mul);
			
		}
       return 0;
}

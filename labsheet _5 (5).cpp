#include<stdio.h>
int main()
{
	int i=1,num,fact=1;
	float sum=0;
	printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
	printf("enter the value of num\n");
	scanf("%d",&num);
	do 
	{
		fact=fact*i;
		sum=sum+(float)1/fact;
		i++;
	}
	
	while(i<=num );
	printf("the vaalue of sum=%.2f",sum );
	return 0;
}

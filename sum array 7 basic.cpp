//sum of elements of array
#include<stdio.h>
int main()
{
	int i,roshan[6],sum=0;
	printf("enter 6 elements\n");
	for(i=0;i<6;i++)
	
	{
	scanf("%d",&roshan[i]);
	
	}	
	for(i=0;i<6;i++)
	{ sum=sum+roshan[i];
		}	
		printf("the sum of values of elements of array =%d",sum);
			return 0;
}

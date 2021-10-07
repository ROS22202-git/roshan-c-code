//continous memory location in array
#include<stdio.h>
int main()
{
	int i,roshan[6];
	printf("enter 6 elements\n");
	for(i=0;i<6;i++)
	
	{
	scanf("%d",&roshan[i]);
	
	}	
	for(i=0;i<6;i++)
	{
		printf(" The  value and adress of  a[%d]=%d \t and %d\n",i,roshan[i],&roshan[i]);
		}	
		
			return 0;
}

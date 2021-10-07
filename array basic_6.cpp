//a another way of  over number of index
	#include<stdio.h>
int main()
{
	int i,roshan[8],n;//the excess memory gets wasted in this case.but if n> 8 then unexpected output displays.
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter %d elements",n);
	
	for(i=0;i<n;i++)
	
	{
	scanf("%d",&roshan[i]);
	
	}	
	for(i=0;i<n;i++)
	{
		printf(" The  value and adress of  a[%d]=%d\t and %d\n",i,roshan[i],&roshan[i]);
		}	
		printf("\n the size of roshan array=%dbytes",sizeof roshan ); //total allocated bytes =32 bytes
			return 0;
} 

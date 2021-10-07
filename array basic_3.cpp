//concept of over number of index 
#include<stdio.h>
int main()
{
	int i,roshan[8];
	printf("enter 6 elements\n");
	for(i=0;i<6;i++)
	
	{
	scanf("%d",&roshan[i]);
	
	}	
	for(i=0;i<6;i++)
	{
		printf(" The  value and adress of  a[%d]=%d\t and %d\n",i,roshan[i],&roshan[i]);
		}	
		printf("\n the size of roshan array=%dbytes",sizeof roshan ); //total allocated bytes =32 bytes
			return 0;
}

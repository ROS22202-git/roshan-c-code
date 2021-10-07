//concept of under  number of index 
#include<stdio.h>
int main()
{
	int i,roshan[3]; //scanf takes 4 elements values  only
	printf("enter 6 elements\n");
	for(i=0;i<6;i++)
	
	{
	scanf("%d",&roshan[i]);
	
	}	
	for(i=0;i<6;i++)
	{
		printf(" The  value and adress of  a[%d]=%d\t and %d\n",i,roshan[i],&roshan[i]); 
		// printf only print  3 right values and other garbage values but their memory location is continuous 
		}	
		printf("\n the size of roshan array=%dbytes",sizeof roshan ); //total allocated bytes =12 bytes
			return 0;
}

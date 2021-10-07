//intializing the values of elements of array
#include<stdio.h>
int main()
{
	int i, a[8]={3,5,67,44,56,76,77,88};
	for(i=0;i<8;i++)
	{
	
	printf("a[%d]=%d\n",i,a[i]);
}
	printf("\n the size of a array=%dbytes",sizeof a ); //size of array=24 bytes
return 0; 
}

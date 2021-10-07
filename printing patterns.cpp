#include<stdio.h>
int main()
{
	int row,col,n;
	printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
	printf("enter the no. of rows\n");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for (col=1;col<=row;col++)
	     {
		 printf("%d",col);
	 }
	 printf("\n");
	 }
	 return 0;

}


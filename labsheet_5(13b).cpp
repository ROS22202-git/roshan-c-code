#include<stdio.h>
int main()
{
	int row,col,num;
	printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
	printf("Enter the number of rows\n");
	scanf("%d",&num);
	for(row=1;row<=num;row++)
	{
		for(col=1;col<=num-row+1;col++)
		{
			printf("%d\t",col);
		}
	    printf("\n");
	}
	return 0;
}

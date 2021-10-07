#include<stdio.h>
int main()
{
	int row ,col,star ,space,num;
	printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
printf("Enter the number of rows\n");
scanf("%d",&num);
	
	for(row =1;row<=num; row++)
	
	{
	 for (space=1;space<=num-row;space++)
		{
			printf(" ");
		}
		for (star=1;star<=2*row-1;star++)
		{
		printf("*");
		}
		printf("\n");
	}
	return 0;
}

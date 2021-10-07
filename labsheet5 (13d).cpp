#include<stdio.h>
int main()
{
	int row ,col,num ,no=1;
	printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
printf("Enter the number of rows\n");
scanf("%d",&num);
	
	for(row =1;row<=num; row++)
	{
		for (col=1;col<=row;col++)
	
	{
			printf("%d\t",no);
			no++;
	}
	
	printf("\n");
}
return 0;
}

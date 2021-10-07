#include<stdio.h>
int main()
{
	int row ,col1,col2,num ;
printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
printf("Enter the number of rows\n");
scanf("%d",&num);
	
	for(row =1;row <=num; row++)
	{
		for (col1=1;col1<=num-row+1;col1++)
	
	{
			printf("%d\t",col1);
			
	}
	
	col1--;
  while  (col1!=1 )
{
		     col1--;
		printf("%d\t",col1);
	
}
	printf("\n");
}
return 0;
}

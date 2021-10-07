#include<stdio.h>
int main()
{
	int first=0,second=1,next,i,num;
	printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
	printf("Enter the number of elements of fibonacci series\n");
	scanf("%d",&num);
	printf("The elements are:");
	for(i=0;i<num;i++)
	{
		 if (i<=1)
		{  next=i;
			printf("%d\t",next);
		}
		
		else 
		{
			next=first+second;
			first=second;
			second=next;
			printf("%d\t",next);
		}
	}
		return 0;
	}

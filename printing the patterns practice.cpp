#include<stdio.h>
int main()
{
	int i=0,next,num,first=0 ,second=1;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
{
	if(i<=1)
	{
	next=i;
	}
	
	else
	{
		next=first +second;
		
	first=second;
	second=next;
	
}
printf("%d\t",next);
}
	
	return 0;
}

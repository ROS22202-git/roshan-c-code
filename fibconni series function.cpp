#include<stdio.h>

int fib( int next);
int main()
{
 int num;
 printf("enter the number\n");
  scanf("%d",&num);
	printf("The nth term of fibconni series =%d ", fib(num));
	return 0;
}

int fib(int next)
{ 
int num, i,first=0,second=1;
for(i=0;i<=num;i++)
{
if (i<=1)
{
next=i;


	 
}
else 
{
	next=first+second;
	first=second;
	second=next;

}
}
printf("the  n term=%d",next);

	return next;
}


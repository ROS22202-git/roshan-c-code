#include<stdio.h>

 int factorial_function (int num )
 {
 int i;
 long fact=1;
 
 for(i=1;i<=num;i++)
 
 {
 	fact=fact*i;
 	
 }
 return fact;
 	
}
int main()
{
	int a;
	long b;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	
	b=factorial_function(a);
	printf("the value of %d!=%d",a,b);
	return 0;
	
}

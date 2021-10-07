#include<stdio.h>
int main()
{  
     int a,b,minimum_value;
     printf("****Roshan dahal(BEL/32/2077)****\n");
	 printf("Enter the values of a and b\n");
     scanf("%d%d",&a,&b);
     minimum_value=(b<a)? b:a; // the value of b  assigns  to minimum_value if  user gives input values a>b //
     printf("the  minimum_value=%d ",minimum_value);
     return 0;
 }

#include<stdio.h>
int fact(int x);
int main()
{
	int x;
	printf("ROSHAN DAHAL-BEL-032\n");
	printf("Enter the value of x\n");
	scanf("%d",&x);
	fact(x);
	printf("the factorial of %d=%d",x,fact(x));
	return 0;
	
}
 fact(int x)
 {
 if(x==0)
 {
 return 1;
 }
 else
 {  return x*fact(x-1); 
 }
}

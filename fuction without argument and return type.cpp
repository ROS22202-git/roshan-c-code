//fuction without argument and with return type
#include<stdio.h>
int  add ()
{
int a,b,c;

printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
c=a+b;
return c;
}
int main()
{
	
	

printf("add=%d",add());
return 0;
}

//fuction with argument and without return type
#include<stdio.h>
int add (int a , int b)
{
int c;

printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("c=%d",c);
return c;
}
int main()
{
	 int x,y,c;
 c=add(x,y);
printf("c=%d",c);

return 0;
}

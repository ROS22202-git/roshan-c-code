#include<stdio.h>
int add( int a,int b )
{
int c;
c=a+b;
return c;
}
int sub(int a,int b)
{
int c;
c=a-b;
return c;
}
int mul(int a,int b)
{
int c;
c=a*b;
return c;
}
float div(int a,int b)
{
float c;
c=(float)a/b;
return c;
}
int main()
{
 int x,y;
 printf("Enter the value of x and y\n");
 scanf("%d%d",&x,&y);
	printf("the sum of %d and %d=%d\n ",x,y,add(x,y));
	printf("the sub of %d and %d=%d\n ",x,y,sub(x,y));
	printf("the mul of %d and %d=%d\n ",x,y,mul(x,y));
	printf("the div of %d and %d=%.2f\n ",x,y,div(x,y));
	return 0;
}


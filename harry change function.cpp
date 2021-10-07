#include<stdio.h>
int change(int a);
int main()
{
	int b=45,d;
	printf("before change,the value of b=%d\n",b);
	change(b);
	printf("after change,the value of b=%d\n",b);
d=	change( 78);
		printf("after change,the value of d=%d",d);
}
int change(int a)
{
 a=78;
 return a;
}

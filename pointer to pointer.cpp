#include<stdio.h>
int main()
{
	int a=5,*b,**c;
	b=&a;
	c=&b;
	printf("the value of a=%d\n",a);
	printf("the valueof a=%d\n",*(&a));
	printf("the value of a=%d\n",*b);
	printf("the value of b =%d\n",&a);
	printf("the value of b =%d\n",*(&b));
	printf("the value of b =%d\n",*c);
	printf("the value of c =%d\n",&b);
	printf("the adress of a=%d",&a);
	printf("the adress of a=%d\n",b);
	printf("the adress of b =%d\n",&b);
	printf("the adress of b=%d\n",c);
	return 0;
	
	
}

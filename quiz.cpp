#include<stdio.h>
int main ()
{
	int a,b,c,t=800;
	float p;
	printf("enter the value of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
p=((float)a+b+c)/t*100 ;
if (p >=33 || p >=40 )
	{
	printf("the  student is passed\n");
	
	printf("the value of p=%.2f",p);
	}
	else
	{
		printf("the student is failed");
		printf("the value of p=%.2f",p);
		}
		return 0;
	}
	

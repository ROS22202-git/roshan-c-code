//find average of numbers l(function lesson)
#include<stdio.h>
float avg (int x1,int x2,int x3,int x4);
int main()
{
	int x1,x2,x3,x4;
	float c;
printf("enter the value of numbers\n");
scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4);
c=avg(x1,x2,x3,x4);
printf("the value of avg of n numbers =%.2f",c);
return 0;
	
}
float avg( int x1,int x2,int x3,int x4)
{
	float result;
result=(x1+x2+x3+x4)/4;
return avg;
}


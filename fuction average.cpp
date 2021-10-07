#include<stdio.h>
float avg (int a,int b, int c);
int main()
{
	int x,y,z;
	printf("enter the values\n");
	scanf("%d%d%d",&x,&y,&z);

printf("the avg of %d,%d and %d  =%.2f",x,y,z,avg(x,y,z))	;
return 0;
}
float avg (int a,int b, int c)
{
float avg;
avg=((float)a+b+c)/3;
return  avg;
}

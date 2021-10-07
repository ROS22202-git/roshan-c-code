#include<stdio.h>
int fact ( int x)
{ int i,f=1;
      for (i=1;i<=x;i++)
	{
		f=f*i;
		}
	return f;
}
int  pow (int x,int y )
{
	int  i,num;
		num=x;
	for(i=1;i<y;i++)
	{ num=num*x;
      }
    return num;
}
int main()
{
	int i,num,x;
	float sum=0;
	printf("ROSHAN DAHAL-BEL-032\n");
	printf("enter the value of num and x \n");
	scanf("%d%d",&num,&x);
	for (i=1;i<=num;i++)
	{
		sum=sum+ (float)pow(x,i)/fact(i);
	}
     printf("the sum=%.2f",sum);
	 return 0;
	}

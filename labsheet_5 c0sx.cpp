#include<stdio.h>
#include<math.h>
int fact(int num)
{
    int i,f=1;	
  
  for (i=1;i<=num;i++)

	{
		f=f*i;
	}
return f;

if(num==0)
return 1; 
}
int main()
{
	int  i,num,sign=-1;
	 float x,x1,cos=0;
	 	printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
	 printf("Enter the value of x(in degree)  and num\n");
	scanf("%f%d",&x,&num);
	x1=x;
	x=x*(3.1415/180);
	for(i=0;i<=num;i+=2)
	{
		
	sign=sign*(-1);

	cos=cos +sign*pow(x,i)/fact(i);
    
}
		printf("cos(%.0f)=%.2f",x1,cos);
return 0;
}

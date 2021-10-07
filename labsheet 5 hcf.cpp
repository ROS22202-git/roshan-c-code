#include<stdio.h>
int main()
{
	int x,y,x1,y1,gcf,lcm;
	printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
	printf("Enter the value of x and y");
	scanf("%d%d",&x,&y);
	x1=x;
	y1=y;
	while(x!=y)
	 {
	 	if (x>y)
	 	{
		 
		 x=x-y;
	 	}
		 else
	 	{
		 y=y-x;
}
	}
	
	printf("gcd=%d\n",x);
	
	 lcm=(x1*y1)/x;
	printf("lcm=%d",lcm);
	
	return 0;
}

	#include<stdio.h>
	int main()
	{
	
	int  i,y;
	float num,x;
	printf("enter  pow(x,y):");
	scanf("%f%d",&x,&y);
	if (y==0)
	printf("num=1");
	else
		{
		num=x;
	for(i=1;i<y;i++)
	{ num=num*x;
      
	}
	printf("num=%.2f",num);
}

	return 0;
}

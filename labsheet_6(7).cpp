#include<stdio.h>
int prime(int n  )
{
int i,c=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{  c=1;
break;
}
 
}
if (c==0)
 
return  0;
else
return 1;
}
	int main()
	
	{ int num,d;
	printf("ROSHAN DAHAL-BEL-032\n");
		printf("Enter the number\n");
		scanf("%d",&num);
		d=prime(num);
		if (d==0)
		printf("%d is prime number",num);
		else
				printf("%d isnot prime number",num);
		
			return 0;
	}

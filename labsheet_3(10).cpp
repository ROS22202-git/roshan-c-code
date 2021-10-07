#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i, c=0;
     printf("**ROSHAN DAHAL(BEL/32/2077)**\n");
	printf("enter  the value a\n");
	scanf("%d",&a);
	
if(a>0 )
{
	if(a==2 || a==1 )
	{
	
	if(a==2)
	{
		printf("%d is only one smallest even prime number\n",a);
		exit(0);
	}
	else
	{
		printf("%d is neither prime nor composite number\n",a);
		exit(0);
	}

}
}
 else
 {
 	printf("%d is the number",a);
 		exit(0);
 }
 
	 for(i=2;i<=a/2;i++)
	{
	if(a%i==0)
	{ 
	    c=1;
	    break;
}
}
if(c==0)
{
printf("%d is prime and odd both\n ",a);
}
else
{
if(a%2==0)
{
	printf("%d is even number",a);
}
else
{
	printf("%d is odd number",a);
}

}
return 0;
}


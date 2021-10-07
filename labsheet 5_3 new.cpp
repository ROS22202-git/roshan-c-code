#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, a,b,count=0;     /*i=even numbers,a and b are range of inegers,  count=counting of numbers*/
                                
printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");	                                    
  printf("Enter the value of  a and b\n");
	scanf("%d%d",&a,&b); 
	printf("even numbers beteen %d and %d count\n",a ,b);
    for(i=a+1;i<b;i++)
{
	if(i%2==0)
	{
	    count++;
	   
	printf(" \t %d\t\t\t%d \n",i,count);

 }
}

 if (count==0)
 
{
  printf("\nno even numbers between %d and %d ",a ,b); 
 exit(0);
}
 
 else
 printf("total even between %d and %d=%d", a,b, count );

	return 0;
}

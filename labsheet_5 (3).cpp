#include<stdio.h>
int main()
{
	int i, a,b,count=0,T_num;     /*i=even numbers,a and b are range of inegers,  count=counting of numbers
                               and T_num=total numbers of even num between a and b*/  
printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");	                                    
  printf("Enter the value of  a and b\n");
	scanf("%d%d",&a,&b); 
	printf(" even numbers\t count\n");
	
	for(i>a;i<b;i++)
{
	if(i%2==0)
	{
	    count++;
		printf("%d\t %d\n",i,count);
	}
}

	return 0;
}

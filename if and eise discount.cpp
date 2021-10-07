#include<stdio.h>
int main()
{
	int total ,discount;
	printf ("enter the total amount of costumer\n ");
	scanf("%d",&total);
{    if(total> 500)
     discount =0.1*total;
	 total-=discount;
	  printf("congratulation! you have got discount=%d",discount);  
   
   }
   {
	 else
     discount  =0.05*total;
     printf("congratulation! you have got discount=%d",discount);  
   total-=disount;
     
	}
   printf("the amount=%d",total);  
   
   return 0;	
}

#include<stdio.h>
int main()
{
       int i,sum=0,mul,n,num;
       printf("enter the value of n and num\n");
       scanf("%d%d",&n,&num);
       for(i=1;i<=num;i++)
       {
	   
       mul =n*i;
       sum=sum+mul;
   }
   printf("the sum of multiple of %d=%d ",n,sum);
   return 0;
}
   
       

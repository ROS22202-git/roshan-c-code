#include<stdio.h>
int main()
{ 
  int num,c;
  printf("Enter the number\n");
  scanf("%d",&num);
   if(num>0)
   {
   	if(num==1||num==2)
   	{
	   if(num==1)
	   {
	   	printf("%d is neither prime nor composite number ",num);
	   	
	   }
	   else
	   {
	   	printf("%d is  smallest and even prime number",num);
	   }
}
	   
	   
	   	else
	   	  
		  if (c<=2) 
	   	{
		   printf("%d is   prime   number",num);
	   }
	   
	   
	   {
		   printf("%d is  odd number",num);
		   
	   	
	   }
}
   }
   
   
   
   else
{
   printf("%d is a number",num );
}
	 
   return 0;
}

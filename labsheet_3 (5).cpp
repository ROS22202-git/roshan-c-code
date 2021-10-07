#include<stdio.h>
int main ()
{
	int year;
	 	printf("**ROSHAN DAHAL(BEL/32/2077)**\n");
	printf("Enter the number\n");
	scanf("%d",&year);
	if(year%4==0)

    {
       if(year%100==0)
	{
		if(year%400==0)
		
		{
				printf("%d is leap year",year);
			}
			else
			{
			printf("%d isnot leap year",year);
			}
		}
	
		
	else
	{
	printf("%d is leap year",year);
		}	
	

     }
    else
    {
     printf("%d isnot leap year",year);
    }

       return 0;
    }

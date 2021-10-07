#include<stdio.h>
int main()
{
	int i;
	float t;         //i=income tax
	printf("Enter the income \n");
	scanf("%d",&i);
	if(i>=2.500000  && i<=1000000 )
	{    
	  
		if(i>=2.500000  && i<5000000 )
	
	
	
	
		{
		
	
			t=0.05*i;
		printf("you should pay Rs.%.2f for income tax",t);
	}
	else
	{			t=0.2*i;
		printf("you should pay Rs.%=2f for income tax",t);
	}

		else
		{
				t=0.3*i;
		printf("you should pay Rs.%.2f for income tax",t);
		
		}
		}


		else
		{
			printf("no tax for you\n");
		}
		return 0;
	}


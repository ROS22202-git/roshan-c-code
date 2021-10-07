#include<stdio.h>
int main()
{
	int a,b;
	float c;
	char ch;
		printf("**ROSHAN DAHAL(BEL/32/2077)**\n");
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	 printf("Enter '+' for addition \n '-' for subtraction \n '*' for multiplication \n '/' for division \n");
	 scanf(" %c",&ch);
	 switch (ch)
	 {
	 
	 case('+'):
	 	
		 printf("The Sum of %d and %d= %d",a,b,a+b );
	 	break ;
		 
		  case('-'):
	 	
		 printf("The Suubtraction  of %d and %d= %d",a,b,a-b );
	 	 break ;
		 
	 	 case('*'):
	 	
		 printf("The multiplation of %d and %d= %d",a,b,a*b );
	    break ;
		
	 	 case('/'):
	      
		  c=(float)a/b;
		 printf("The division of %d and %d= %.2f",a,b,c );
	 	 break ;
		 
	 	 default:

		 
			printf("invalid input" );
         }
         return 0;
     }
		 
	 	
	 	

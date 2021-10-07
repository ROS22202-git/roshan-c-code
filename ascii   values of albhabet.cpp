#include<stdio.h>
int main()
  {
	char ch;
	printf("**ROSHAN DAHAL(BEL/32/2077)**\n");
	printf("Enter an alphabert\n");
	scanf(" %c",&ch);
if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		if(ch>=65 && ch<=90)
		printf("%c is a uppercase albhabet",ch);
	   else
	   printf("%c is lowercase albhabet ",ch );
    }
      else
     {
     printf("%c is not an alphabet",ch );
  }
    return 0;
   }

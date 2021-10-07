#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int num,guess,nguess=1;
	srand(time(0)); 
	num=rand()%100+1;
//	("the number is %d\n",num);
    
    do
    {
    	printf("Guess the number between 1 and 100\n");
	    scanf("%d",&guess);
	if(guess>num)
	{
		printf("lower number please!\n ");
	}
	else if (guess<num)
	{
			printf("Higher number please! \n");
	}
	else 
	{
		printf("you guessed it in %d attempts",nguess);
	}
	nguess++;
	}
	while(guess!=num);
	printf("congraluaion! your guess is  the right\n");
	nguess;
	return 0;
}

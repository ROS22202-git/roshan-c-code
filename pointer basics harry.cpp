#include<stdio.h>

int  main()
{
int *j,i=5;
j=&i;
	printf("the adresss of i=%d\n",&i);
		printf("the adresss of i=%d\n",j);
	printf("the adress of j=%d\n",&j);
	printf("the value of i=%d\n",i);
	printf("the value of i=%d\n",*(&i));
	printf("thevalue of i=%d\n",*j);
		return 0;
			
}

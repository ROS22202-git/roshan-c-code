// area of square uing library function math.h

#include<stdio.h>
#include<math.h>
int main()
{
	int side;
	printf("enter the side\n");
	scanf("%d",&side);
	printf("the value of area =%.2f cm^2", pow(side,2));
	return 0; 
}

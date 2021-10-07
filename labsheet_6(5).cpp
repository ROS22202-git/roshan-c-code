
#include <stdio.h>
void swap(int * , int*);     
int main ()
{
	int x,y;
	printf("ROSHAN DAHAL-BEL-032\n");
	printf("Enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	printf("before swapping,the values of x=%d and y=%d\n ",x,y);
	swap (&x,&y);
	printf("after swapping,the values of x=%d and y=%d ",x,y);
	return 0;
}
void swap(int *a , int *b )
{
int temp;
temp=*b;
*b=*a;
*a=temp;

}

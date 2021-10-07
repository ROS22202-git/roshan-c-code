#include<stdio.h>
void swap(int a, int b);
int main()
 {
 	int x,y;
 	printf("Enter the value of x and y\n");
 	scanf("%d%d",&x,&y);
 	printf("Before swapping, the value of x=%d and y=%d \n",x,y);
 	swap(x,y);
 	return 0;
 }
 
void swap(int a,int b)
 {
 	a=a+b;
 	b=a-b;
 	a=a-b;
printf(" after swapping ,the value of x=%d and y=%d", a,b);

 }

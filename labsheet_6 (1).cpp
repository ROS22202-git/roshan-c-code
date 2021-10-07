#include<stdio.h>
int sum(int a, int b)
  { 
  int sum;
  sum= a+b;
  return sum;
}
 int mul(int a, int b)
 {
 	int mul;
 mul=a*b;
 return mul;
}
float div(int a, int b)
 {
 	float div;
 div=(float)a/b;
 return div;
 }
 int sub(int a, int b)
 {
 	int sub;
 sub=a-b;
 return sub;
}
int main()
 {    int x,y ;
    printf("ROSHAN DAHAL-BEL-032\n");
 	printf("Enter the value of a and b\n");
 	scanf("%d%d",&x,&y);
 	printf( "the sum of %d and %d =%d\n", x,y,sum(x,y));
 	printf(" the multiplication of %d and %d=%d\n",x,y,mul(x,y));
 	printf(" the division of %d and %d=%.2f\n",x,y,div(x,y));
	 printf(" the subtraction of  %d and %d=%d\n",x,y,sub(x,y));
	 return 0;
}
 
 

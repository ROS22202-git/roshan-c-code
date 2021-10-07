#include<stdio.h>
void calculator(  float *a, float *b,float *r,float *s,float *m)
{
	
*r=*a + *b;
*s=*a - *b;
*m =*a * *b;

}
int main()
{
 float x,y,a,m,s;
printf("ROSHAN DAHAL-BEL-032\n");
printf("Enter the values  of x and y\n");
scanf("%f%f",&x,&y);
calculator(&x,&y,&a,&s,&m);
printf("The addition of %0.2f and %0.2f =%0.2f\n",x,y,a);
printf("The subtraction  of %0.2f and %0.2f =%0.2f\n",x,y,s);
printf("The multiplication of %0.2f and %0.2f =%0.2f\n",x,y,m);
return 0;
	
}

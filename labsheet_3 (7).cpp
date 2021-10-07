


#include<stdio.h>
#include<math.h>
int main() 
{    

 float a,b,c ,r1,r2,discrimant,realpart,imaginarypart;
	printf("**ROSHAN DAHAL(BEL/32/2077)**\n");
printf("Enter the values of a ,b and c\n");
scanf("%f%f%f",&a,&b,&c);
discrimant=b*b-4*a*c;
if (discrimant==0)
{
r1=r2=-b/(2*a);
printf("r1=r2=%.2f\n",r1);
}
else if(discrimant>0)
{
r1=((-b+sqrt(b*b-4*a*c))/2*a);
r1=((-b-sqrt(b*b-4*a*c))/2*a);
printf("the value of r1=%.2f\n and r2=%.2f",r1,r2);
}
else
{
realpart =-b/(2*a);
imaginarypart=sqrt(discrimant)/2*a;
 
 printf("the value of r1=%.2f+%.2fi and value of r2= %.2f-%.2fi ",realpart,imaginarypart,realpart,imaginarypart);
}
return 0;
}

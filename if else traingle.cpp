//my first project //+
#include<stdio.h>
#include<math.h>
int main()
{ 
int a,b,c;
float s, AR;

printf("Enter the values of a ,b,c \n");


scanf ("%d%d%d",&a, &b,&c);
s =(a+b+c)/2;
if (((a+b)>c) && ((b+c)>a) && ((c+a)>b) )
{
AR= sqrt(s*(s-a)*(s-b)*(s-c));
printf("the values of AR=%f",AR);
}
else
{printf ("the traingle cannot be formed");

}
return 0;
}


//fuction with argument and with return type
#include<stdio.h>
int add (int a, int b)
{

int c;

printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
c=a+b;
return c;
}
int main()
{

int x,y;
printf("add=%d",add(x,y));
return 0;
}

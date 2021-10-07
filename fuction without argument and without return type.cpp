//fuction without argument and without return type
#include<stdio.h>
void add ()
{
int a,b,c;

printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("c=%d",c);
}
int main()
{
add();
return 0;
}

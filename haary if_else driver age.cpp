#include<stdio.h>
int main()
{ 
int age;
printf("Enter your age\n");
scanf("%d",&age);
if((age>70)&&(age<18)){
if(age>70)
{


printf("you are above 70! you cannot drive");
}
else

{
printf("you are below 18! you cannot drive");
 
 }
}
else
{
if(age==45)
{
printf("you can drive");
}
}
}
else
{

printf("good luck");
}
}
return 0;
}

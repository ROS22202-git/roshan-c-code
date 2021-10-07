//Armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
	int rem, sum=0,num,original;
printf("Enter the value of num\n");
	scanf("%d",&num);
	original=num;
	while(num!=0)
	{
	rem=num%10;
	sum=sum+ pow(rem,3);
	num/=10;
	
}
if(original==sum)
{
printf("%d is  armstrong number",original);
}
else
{
printf("%d is  not a armstrong number",original);
}
return 0;
}

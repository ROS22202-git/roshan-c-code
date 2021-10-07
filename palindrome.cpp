#include<stdio.h>
int main()
{
 int num,rev=0,original,rem;
 printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
printf("Enter the value of num\n");
scanf("%d",&num);
original= num;
while(num!=0)
{
	rem=num%10;
	rev=rem+(rev*10);
	num/=10;
	
}
if (original==rev)
{
	printf("%d is palindrome number \n",original);
	
}
else
{
printf("%d is not palindrome\n",rev);
}
return 0;
}

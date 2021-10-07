#include<stdio.h>
int main()
{
	int sum=0,i,n[10];
	float avg;
	printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
	printf("Enter 10 elements \n ");
	for (i=0;i<10;i++)
 {
  scanf("%d", &n[i]);
   sum =sum+n[i];
}
printf("\nthe value of sum=%d\n",sum);
avg=float(sum)/10;
printf("the value of avg=%.2f",avg);
return 0;	
}

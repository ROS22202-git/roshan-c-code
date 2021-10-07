#include<stdio.h>
#include<math.h>
int main()
{
	int i,fact,x,num;
    float sum=0;
    printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
     printf("enter the value of xand  num \n");
	scanf("%d%d",&x,&num);
	i=fact=1;
	do 
	{
		fact=fact*i;
		sum =sum+ pow (x,i)/fact ;
		i++;
	}
	while(i<=num );
	printf("the value of sum=%.2f",sum);
	return 0;
}

#include<stdio.h>
int main()
{
	int mul1,i,n,mul;
	printf("@@@ROSHAN DAHAL(BEL-32-2077)@@@\n");
	printf("enter the value of mul1 and n\n");
	scanf("%d%d",&mul1,&n);
	printf("multiplication table of %d\n",mul1);
 for (i=1;i<=n;i++)
 {
 mul =mul1*i;
 printf(" %d * %d =%d\n",mul1,i,mul);
}

return 0;	
}

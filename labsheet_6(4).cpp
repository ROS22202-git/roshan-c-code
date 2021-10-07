	#include<stdio.h>
	int nfib(int n)
{
		int i,f=0,s=1,num;
for(i=0;i<n;i++)

 if (i<2)
 num=i;
 else 
{
     num=f+s;
 	f=s;
 	s=num;
 }
  return num;
}
int main()
	{
	     int n;
		printf("ROSHAN DAHAL-BEL-032\n");
		printf("enter the nth number\n");
		scanf("%d",&n);
		printf("the nth fibonacci number =%d",nfib(n));
		return 0;
	}

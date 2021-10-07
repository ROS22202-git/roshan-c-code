#include<stdio.h>
int main()
{
	int f=0,s=1,next,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	while(next!=n)
	{
		next=f+s;
			f=s;
		s=next;
			printf("%d\n",next);
			if(next!= n && f+s< n )
			{
			printf("%d doesnot lie in fibcornni series",n);
			break;
		}
	
	
		
		
	}
	return 0;
}



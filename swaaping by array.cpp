//swapping values by array
#include<stdio.h>
void swap(int a[],n)
{
a[0]+=a[1];
a[1]=a[0]-a[1];
a[0]=a[0]-a[1];
}
display()
for(i=0;i<n;i++)
	{
		printf(" The  value of a[%d]=%d\t ",i,a[i]);
		}	

int main()

{
	int i,a[2],n;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter %d elements",n);
	
	for(i=0;i<n;i++)
	
	{
	scanf("%d",&a[i]);
	
	}	
	
		
			return 0;
} 


#include<stdio.h>
 void input ( int k[],int j)
{ int i;
	for(i=0;i<j;i++)
	scanf("%d",&k[i]);
	
}
void sorting_ascending (int a[],int p)
{
	int i,j,temp;
	for(i=0;i<p-1;i++)
	{
		for(j=i+1;j<p;j++)
		{
		if(a[i]<a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	
	
	}
}
	}
}
 void	display(int l[],int s)
 { int i;
 for(i=0;i<s;i++)
 printf("%d\t",l[i]);

}

int main()
{
	int a[20],n;
	printf("Enter the value of n:");
scanf("%d",&n);
printf("enter %d elements",n);
input(a,n);
sorting_ascending(a,n);
display(a,n);
return 0;

}

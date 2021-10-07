//understanding array and function
//passing array as argument

#include<stdio.h>


	void input (int a[], int n)

{
	
int i;
   for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
   }
}
  void display(int a[], int n)
   { 
   int i;
   for (i=0;i<n;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
   }
   }
   int main()
   {
   	int i,n,a[5];
   	printf("Enter the value of n:");
   	scanf("%d",&n);
   	printf("Enter %d elemets\n",n);
   	input(a,n);
   	
  display(a,n);
   return 0;
   }



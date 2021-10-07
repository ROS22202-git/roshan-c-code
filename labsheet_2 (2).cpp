#include<stdio.h>
int main()
{ 
    int a,b,c,d,e;        //c is the third variable used for swapping the values of a and b//
     printf("****Roshan dahal(BEL/32/2077)****\n");
	 printf("Enter the values of a,b,d,e\n");
    scanf("%d%d%d%d",&a,&b,&d,&e);
    printf(" Before swapping,The values of a=%d , b=%d, d=%d,  e=%d\n",a,b,d,e);
    

    c=a;
    a=b;
    b=c;  
    d+=e;     //swapping of values of d and e variables without using third variable(by using assignment operator)// 
	e=d-e;
	d=d-e;
    printf("After swapping,The values of a=%d and b=%d",a,b);
    printf("\nAfter swapping,The values of d=%d and e=%d",d,e);

 
	return 0;
}

 #include<stdio.h>
 int swap(int *a, int *b);
 int main()
 {
 	 int c=7, d=9,temp,*b,*a;
 	 b=&c;
 	 a=&d;
 	 printf("the value of a and b before swapping=%d and %d\n ", c,d);
 
 	temp=*b;
 	*b=*a;
 	*a=temp;
 	 printf("the value of a and b after swapping=%d and %d\n ", c,d);
 	printf("the value of *a , *b and temp =%d,%d and %d\n ", *a,*b,temp);
 	return 0;
 }
 
 

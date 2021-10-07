#include<stdio.h>
int a=5,b;    //global variable
 void counter()
 {
  int  static c=0;  //the ouput value of c holds due to static keyword
 c++;
 printf("the fuction is called %d times\n",c);
 
 }
 int function_1()
{
   int a=7,b=8; //the  older values of  a and b changes into 7  and 8 
 printf("the value of a=%d and b=%d\n",a,b);
}
int main()
{
	printf("ROSHAN DAHAL-BEL-032\n");
	counter(); //fuction call
	
	counter();    //fuction call
	
	
	counter();    //fuction call
	
	
	counter();    //fuction call
	printf("the value of a=%d and b=%d\n",a,b); //global value assigns to a and b
	int a=9,b=3;
	printf("the value of c=%d and d=%d\n",a,b); //the value changes to9 and 3
	function_1( );
	printf("the value of a=%d and b=%d\n",a,b); //the value of and b remains same as given in main function 
	 
	 {
	 int extern a,b;       //now the global values assign to a and b
	 printf("the value of c=%d and d=%d\n",a,b); 
	 } 
	 return 0;
}

#include<stdio.h>
 void goodmorning(); 
 void goodafternoon();
 void goodnight();
int main()
{
	int a;
 
goodmorning();

	return 0; 
}
    void goodmorning()
    {
    	printf("goodmorning harry\n");
    	goodafternoon();
}

	 void goodafternoon()
    
    {
			printf("goodafternoon harry\n");
    goodnight();
}

	 void goodnight()
   {
   
    	printf("goodnight harry\n");
    
	}

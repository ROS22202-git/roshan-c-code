#include<stdio.h>
float f (int c);
int main()
{
	int c;
	printf("Enter the celsisius temperature\n");
	scanf("%d",&c);
	printf("The  fahrenheit temperature =%.2f",f(c));
	
}
float f(int c)
{
	float f;
	f=(float)9*c/5+32;
	return f;
}

#include<stdio.h>
#include<math.h>
#define pie 3.1415
int main()
{ 
    int r,h;  /*r=radius of cylinder(in cm) , h=height of cylinder(in cm),c=curved surface area(in cm^2), 
                      t=total surface area(in cm^2) and v=volume of cylinder(in cm^3)*/
	float c,t,v;
	 printf("****Roshan dahal(BEL/32/2077)****\n");
	printf("Enter the values of r and h\n");        
    scanf("%d%d",&r,&h);
    c=2*pie*r*h;
    t=2*pie*r*(r+h);
    v=pie*pow(r,2)*h;
    printf("the values of \n c=%.2fcm^2 \n  t=%.2fcm^2 \n v=%.2f^3",c,t,v);
    return 0;
}
    
    
    
    

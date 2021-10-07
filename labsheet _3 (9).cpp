#include<stdio.h>
int main ()
{ 
int p, c,m, A,b ,f,t;                        /* p=physics, c=c programming,m =maths, A=applied mechanics,
                                                 b=basic electrical,f= full marks each,t=total,o=obtained percentage*/
 float o;
 printf("**ROSHAN DAHAL(BEL/32/2077)**\n");
printf("Enter the marks of  physics  ,Applied_mech , maths c_programming,basic_electrical \n" );
scanf("%d%d%d%d%d",&c,&p,&A,&b ,&m);

  printf("Enter fm_each  of exam\n");
 scanf("%d",&f);
 t =5*f;
  o=((float) (A+p+c+m+b))/t*100;
 
 
 if (o>=90&& o<=100 && c>=40 &&  m>=40 && A>=40 && b>= 40  &&  p>=40 )
 
{
  printf("CONGRALUTION!!  you get grade A\n"  );
  printf("your percentage is %.2f",o);
}
 
else if  (80>=o && o<90 && c>=40 &&  m>=40 && A>=40 && b>= 40  &&  p>=40)

{
  
 printf("   you get grade B\n" );
 printf("your percentage is %.2f",o);
}
 
 else if  (80>o&& o>=70 && c>=40 &&  m>=40 && A>=40 && b>= 40  &&  p>=40 )
{
  
 printf("  you get grade C\n"  );
 printf("your percentage is %.2f",o);
}
 
 
 else if  (70>o && o>=60 &&  m>=40 && A>=40 && b>= 40  &&  p>=40 )
{
  
 printf("  you get grade D\n"   );
 printf("your percentage is %.2f",o);
}
 
  else if  (60>o && o>=40 && c>=40 &&  m>=40 && A>=40 && b>= 40  &&  p>=40 )
{
  
 printf(  "you get grade E\n" );
 printf("your percentage is %.2f",o);
}
 
 else
 
 {
 printf("you are failed in exam "  );
 
}
return 0;
}

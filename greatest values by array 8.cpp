#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 void info (int n);
void input (int n);
void max(int x, int *maxi);
void min(int x, int *mini);
int main()
{  
    int n;
    printf("Enter the value of n from which maximum and minimum is determined\n");
    scanf("%d",&n);
    info (n);
    input (n);
    return 0;
}
 void info (int n)
 {

     printf("This program is design to find max and min from %d elements\n",n);
     getch();
     system ("cls");
 }
  
  void input(int n)
  {
      int maxi,mini ,x,i;
       printf("Enter %d elements",n);
       scanf("%d",&x);
       x=mini=maxi;
       for(i=2;i<=n;i++)
       {
           scanf("%d",&x);
           max(x,&maxi);
           min(x,&mini);
           printf("The max number=%d\n",maxi);
             printf("The min number=%d",mini);
       }
       
  }
  void max(int x,int *maxi)
  {
      if (*maxi<x)
      {
         *maxi=x;
      }
  }
void min(int x,int *mini )
{

    if (*mini<x)
    {
        *mini=x;
    }
}

  
    









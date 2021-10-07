#include<iostream>
using namespace std;
class test
{

	 public:
	 	
	 	void putdata(int a,float b)
	 	{
	 		cout<<"The  roll and per is:"<<a<<" "<<b;
	 		
		 }
	 	
};

 	
 
 int main()
 { 
 int a;
 float b;
 cout<<"Enter rollno and  per :";
 cin>>a>>b;
 cout<<"a and b is"<<a<<" "<<b;
 test t1;
 t1.putdata(a,b);
 return 0;
 }

#include<iostream>
using namespace std;
class test
{
	int roll;
	float per;
	 public:
	 	void getdata(int, float);
	 	void putdata()
	 	{
	 		cout<<"The  roll and per is:"<<roll<<" "<<per;
	 		
		 }
	 	
};
 void test::getdata(int x, float y)
 {
 	roll=x;
 	per=y;
 	
 }
 int main()
 { 
 int a;
 float b;
 cout<<"Enter rollno and  per :";
 cin>>a>>b;
 test t1;

 t1.getdata(a,b);
 t1.putdata();
 return 0;
 }

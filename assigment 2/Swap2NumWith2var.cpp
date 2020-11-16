#include<iostream>
using namespace std;
class Swap
{
	public:
		int num1,num2;
	void getdata()
	{
		cout<<"enter any two numbers"<<endl;
		cin>>num1>>num2;
	}
	
	void swap_num()
	{
		num1=num1+num2;
		num2=num1-num2;
		num1=num1-num2;
	}
	void show()
	{
		cout<<"numbers after swapping"<<endl;
		cout<<"number1="<<num1<<"\n"<<"number2="<<num2<<endl;
	}
};
int main()
{
	Swap s;
	s.getdata();
	s.swap_num();
	s.show();
}

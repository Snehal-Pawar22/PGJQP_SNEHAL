#include<iostream>
using namespace std;
class SwapNum
{
	public:
		int num1,num2;
		void getdata()
		{
			cout<<"enter any two numbers"<<endl;
			cin>>num1>>num2;
		}
		
		void swap()
		{
			int temp;
			temp=num1;
			num1=num2;
			num2=temp;
		}
		void show()
		{
			cout<<"number1 "<<num1<<endl;
			cout<<"number2 "<<num2<<endl;
		}
};
int main()
{
	SwapNum sn;
	sn.getdata();
	sn.swap();
	sn.show();	
}

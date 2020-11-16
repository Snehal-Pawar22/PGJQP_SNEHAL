#include<iostream>
using namespace std;
class Check_Equality
{
	public:
		int num1,num2;
		void getData()
	{
		cout<<"enter any two number"<<endl;
		cin>>num1>>num2;
	}
	void check()
	{
		if(num1==num2)
		{
			cout<<"entered numbers are equal"<<endl;
		}
		else
		cout<<"entered numbers are not equal"<<endl;
	}
};
int main()
{
	Check_Equality ce;
	ce.getData();
	ce.check();	
}

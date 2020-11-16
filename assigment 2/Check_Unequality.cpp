#include<iostream>
using namespace std;
class Check_Unequality
{
	public:
		int num1,num2;
		void getData()
	{
		cout<<"enter any number"<<endl;
		cin>>num1>>num2;
	}
	void check()
	{
		if(num1!=num2)
		{
			cout<<"entered numbers are unequal"<<endl;
		}
		else
		cout<<"entered numbers are  equal"<<endl;
	}
};
int main()
{
	Check_Unequality ce;
	ce.getData();
	ce.check();	
}

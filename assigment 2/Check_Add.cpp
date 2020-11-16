#include<iostream>
using namespace std;
class Check_Addition
{
	public:
	int num1,num2,add;
	void getdata()
	{
		cout<<"enter any two numbers"<<endl;
		cin>>num1>>num2;
	}
	void check_add()
	{
		add=num1+num2;
		if(add>=100)
		cout<<"addition of entered number is greater than 100"<<endl;
		else
		cout<<"addition of entered number is less than 100"<<endl;
	}
};
int main()
{
	Check_Addition ca;
	ca.getdata();
	ca.check_add();
}

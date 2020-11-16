#include<iostream>
using namespace std;
class Check_Greater
{
	public:
		int num1,num2;
		void check()
		{
			cout<<"enter any two number"<<endl;
			cin>>num1>>num2;
			if(num1>num2)
			{
				cout<<num1<<" is greater number"<<endl;
			}
			else
			cout<<num2<<" is greater number"<<endl;
		}
};
int main()
{
	Check_Greater c;
	c.check();
}

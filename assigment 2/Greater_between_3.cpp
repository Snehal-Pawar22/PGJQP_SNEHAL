#include<iostream>
using namespace std;
class Check_Greater
{
	public:
		int num1,num2,num3;
		void check()
		{
			cout<<"enter any three number"<<endl;
			cin>>num1>>num2>>num3;
			if(num1>num2&&num1>num3)
			{
				cout<<num1<<" is greater number"<<endl;
			}
			else if(num2>num1&&num2>num3)
			cout<<num2<<" is greater number"<<endl;
			else
			cout<<num3<<"is greater number"<<endl;
		}
};
int main()
{
	Check_Greater c;
	c.check();
}

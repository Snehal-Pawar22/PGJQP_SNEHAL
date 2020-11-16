#include<iostream>
using namespace std;
class Check_Average
{
	public:
		int num1,num2,num3,num4,num5;
		float avg;
		void getdata()
		{
			cout<<"enter any five numbers"<<endl;
			cin>>num1>>num2>>num3>>num4>>num5;
		}
		void check()
		{
			avg=num1+num2+num3+num4+num5/5;
			if(avg>10)
			{
				cout<<"average is greater than 10"<<endl;
			}
			else
			cout<<"average is less than 10"<<endl;
		}
};
int main()
{
	Check_Average ca;
	ca.getdata();
	ca.check();
}

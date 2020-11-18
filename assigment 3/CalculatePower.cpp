#include<iostream>
using namespace std;
class Power
{
	public:
		int power,base;
		long int result=1;
		void getdata()
		{
			cout<<"enter value for power and base"<<endl;
			cin>>power>>base;
		}
		void calculate()
		{
			for(int i=1;i<=power;i++)
			{
				result=result*base;
			}
		}
		void display()
		{
			cout<<base<<"power"<<power<<"="<<result<<endl;
		}
};
int main()
{
	Power p;
	p.getdata();
	p.calculate();
	p.display();
}

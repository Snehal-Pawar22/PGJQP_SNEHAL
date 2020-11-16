#include<iostream>
using namespace std;
class Check_EvenOdd
{
	public:
		int num;
		void check()
		{
			cout<<"enter a number"<<endl;
			cin>>num;
			if(num%2==0)
			{
				cout<<"number entered is even"<<endl;
			}
			else
			{
				cout<<"number entered is odd"<<endl;
			}
		}
};
int main()
{
	Check_EvenOdd c;
	c.check();
}

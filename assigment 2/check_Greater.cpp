#include<iostream>
using namespace std;
class Check_Greater
{
	public:
		int num;
		void check()
		{
			cout<<"enter number"<<endl;
			cin>>num;
			if(num>10)
			{
				cout<<"number is greater than 10"<<endl;
			}
			else
			cout<<"number is not greater than 10"<<endl;
		}
};
int main()
{
	Check_Greater c;
	c.check();
}

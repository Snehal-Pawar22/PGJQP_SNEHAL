#include<iostream>
using namespace std;
class Check_Eligibility
{
	public:
		int age;
		void check()
		{
			cout<<"enter your age"<<endl;
			cin>>age;
			if(age<=18)
			{
				cout<<"you are not eligible for voting"<<endl;
			}
			else
			cout<<"you are eligible for voting"<<endl;
		}
};
int main()
{
	Check_Eligibility  c;
	c.check();
}

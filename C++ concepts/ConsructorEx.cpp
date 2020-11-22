#include<iostream>
using namespace std;
class ConsructorEx
{
	public:
		int num;
		ConsructorEx()
		{
			cout<<"in constructor"<<endl;
			num=10;
		}
		~ConsructorEx()
	{
		cout<<"distructor invokes"<<endl;
	}
};
int main()
{
	ConsructorEx ce;
	
}

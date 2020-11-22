#include<iostream>
using namespace std;
class ConstrOverload
{
	public:
		ConstrOverload()
		{
			cout<<"in Default constructor"<<endl;
		}
		ConstrOverload(int a,int b)
		{
			cout<<a<<endl<<b<<endl;
		}
		~ConstrOverload()
		{
			cout<<"distructor invokes"<<endl;
		}
};
int main()
{
	ConstrOverload c;
	ConstrOverload(20,10);
}


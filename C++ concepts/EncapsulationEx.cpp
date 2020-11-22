#include<iostream>
using namespace std;
class EncapsulationEx
{
	int num;
	public:
		void getNum();
	
		void show();
		
};
void EncapsulationEx::getNum()
		{
			cout<<"enter any number"<<endl;
			cin>>num;
		}
void EncapsulationEx::show()
	{
		cout<<"your entered number is"<<num<<endl;
	}
int main()
{
	EncapsulationEx e;
	e.getNum();
	e.show();
}

#include<iostream>
using namespace std;
class MultiplyFloat
{
	public:
		float f1,f2;
		double mult;
		void multiply()
		{
			cout<<"enter any two float number"<<endl;
			cin>>f1>>f2;
			mult=f1*f2;
			cout<<"multiplication is\t"<<mult<<endl;
			
		}
};
int main()
{
	MultiplyFloat m;
	m.multiply();
}

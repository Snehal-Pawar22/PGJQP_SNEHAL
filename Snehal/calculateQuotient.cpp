#include<iostream>
using namespace std;
class Quotient
{
	public:
		int n1,n2,rem;
		float q;
		void calculate()
		{
			cout<<"enter any two numbers"<<endl;
			cin>>n1>>n2;
			q=n1/n2;
			rem=n1%n2;
			cout<<"quotient =\t"<<q<<endl;
			cout<<"reminder=\t"<<rem<<endl;
		}
};
int main()
{
	Quotient q;
	q.calculate();
}

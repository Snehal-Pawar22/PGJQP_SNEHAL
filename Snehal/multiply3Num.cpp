#include<iostream>
using namespace std;
class Mult3Num
{
	public:
		int n1,n2,n3,mult;
		void multiplication()
		{
			cout<<"enter three numbers"<<endl;
			cin>>n1>>n2>>n3;
			mult=n1*n2*n3;
			cout<<"multiplication of three number is\t"<<mult<<endl;
			
		}
};
int main()
{
	Mult3Num m;
	m.multiplication();
}

#include<iostream>
using namespace std;
class Average
{
	public:
		int n1,n2,n3,n4,n5;
		float avg;
		void calculate_Avg()
		{
			cout<<"enter any five numbers"<<endl;
			cin>>n1>>n2>>n3>>n4>>n5;
			avg=n1+n2+n3+n4+n5/5;
			cout<<"average = "<<avg<<endl;
		}
};
int main()
{
	Average a;
	a.calculate_Avg();
}

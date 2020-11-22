#include<iostream>
using namespace std;
class AbstractionEx
{
	private:
		int num1,num2;
		public:
			int sum=0;
			void add();
			void getNum();
};
void AbstractionEx::getNum()
{
	cout<<"enter any two numbers"<<endl;
	cin>>num1>>num2;
}
void AbstractionEx::add()
{
	sum=num1+num2;
	cout<<"addition="<<sum<<endl;
}
int main()
{
	AbstractionEx a;
	a.getNum();
	a.add();

}

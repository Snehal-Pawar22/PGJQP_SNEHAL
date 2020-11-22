#include<iostream>
using namespace std;
class FuncOverload
{
	public:
		int num1,num2;
		void sum();
		void sum(int a,int b);
};
void FuncOverload::sum()
{
	int x=10,y=20;
	cout<<"sum of x and y="<<x+y<<endl;
}
void FuncOverload::sum(int a,int b)
{
	cout<<"sum of a and b="<<a+b;
}
int main()
{
	FuncOverload f;
	f.sum();
	f.sum(37,24);
}

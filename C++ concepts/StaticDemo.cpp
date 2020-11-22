#include<iostream>
using namespace std;
class StaticDemo
{
	public:
	int num1;
	static int num2;
	void print();
	StaticDemo();
};
StaticDemo::StaticDemo()
{
	num1=10;
	num2=10;
}
void StaticDemo::print()
{
	cout<<"non ststic variable num1 = "<<num1<<endl;
	cout<<"ststic variable num1 = "<<num2<<endl;

}
int main()
{
	StaticDemo s;
	cout<<"for first object :"<<endl;
	s.print();
	cout<<"for second object :"<<endl;
	StaticDemo s2;
	s2.print();
}

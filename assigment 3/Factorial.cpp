#include<iostream>
using namespace std;
class Factorial
{
	public:
		int num,fact=1;
		void getNum()
		{
			cout<<"enter a number"<<endl;
			cin>>num;
			
		}
		void calculate()
		{
			for(int i=1;i<=num;i++)
			{
				fact=fact*i;
			}
			cout<<"factorial of a number= "<<fact;
		}
};
int main()
{
	Factorial f;
	f.getNum();
	f.calculate();
}

#include<iostream>
using namespace std;
class FactorialDemo
{
	public:
		int num,fact;
		void getNum()
		{
			cout<<"enter a number"<<endl;
			cin>>num;
		}
		int  calc()
		{
   			if ((num==0)||(num==1))
   			return 1;
   			else
   			{
   			 fact=num*fd.calc(num-1);
			   return(fact);
			}
		}
		void show(int f)
		{
			cout<<"factorial of a number ="<<fact<<endl;
			
		}
};
int main()
{
	FactorialDemo fd;
	fd.getNum();
	int r=fd.calc();
	fd.show(r);
}

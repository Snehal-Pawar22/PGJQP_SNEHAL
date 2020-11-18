#include<iostream>
using namespace std;
class SumOfDigit
{
	public:
		int num,rem,sum=0;
		void getNum()
		{
			cout<<"enter a number"<<endl;
			cin>>num;
		}
		int calculate()
		{
			while(num!=0)
			{
				rem=num%10;
				sum=sum+rem;
				num=num/10;
			}
			return(sum);
		}
	void print(int s)
	{
		cout<<"addition of a digits ="<<s<<endl;	
	}	
};
int main()
{
	SumOfDigit sd;
	sd.getNum();
	int r=sd.calculate();
	sd.print(r);
}

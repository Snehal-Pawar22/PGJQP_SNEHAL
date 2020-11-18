#include<iostream>
using namespace std;
class CountDigit
{
	public:
		int num,count;
		void getNum()
		{
			cout<<"enter a number"<<endl;
			cin>>num;
		}
		int countNum()
		{
			while(num!=0)
			{
				num=num/10;
				count++;
			}
			return(count);
		}
		void print (int r)
		{
			cout<<"digits in number ="<<r<<endl;
			
		}
};
int main()
{
	CountDigit cd;
	cd.getNum();
	int c=cd.countNum();
	cd.print(c);
}

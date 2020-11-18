#include<iostream>
using namespace std;
class Palindrom
{
	public:
		int num,Rnum=0,rem;
		int temp;
		void getdata()
		{
			cout<<"enter any number"<<endl;
			cin>>num;
			temp=num;
		}
		void revNumber()
		{
			while(num!=0)
			{
				rem=num%10;
				Rnum=Rnum*10+rem;
				num=num/10;
			}
		}
		void check_Palindrom()
		{
			if(Rnum==temp)
			cout<<"entered number is palindrom number"<<endl;
			else
			cout<<"entered number is not a palindrom number"<<endl;
		}
};
int main()
{
	Palindrom p;
	p.getdata();
	p.revNumber();
	p.check_Palindrom();
}

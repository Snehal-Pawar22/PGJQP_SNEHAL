#include<iostream>
using namespace std;
class ReverseNumber
{
	public:
		int num,Rnum=0,rem;
		void getdata()
		{
			cout<<"enter any number"<<endl;
			cin>>num;
		}
		void revNumber()
		{
			while(num!=0)
			{
				rem=num%10;
				Rnum=Rnum*10+rem;
				num=num/10;
			}
			cout<<"after reversing a number "<<Rnum<<endl;
		}
};
int main()
{
	ReverseNumber r;
	r.getdata();
	r.revNumber();
		
}

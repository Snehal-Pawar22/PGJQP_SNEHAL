#include<iostream>
using namespace std;
class CheckArmstrong
{
	public:
		int num,rem,result,temp;
		void getdata()
		{
			cout<<"enter a number"<<endl;
			cin>>num;
		}
		int check()
		{
			temp=num;
			while(num!=0)
			{
				rem=num%10;
				result=result+rem*rem*rem;
				num=num/10;
			}
			if(result==temp)
			return(1);
			else
			return(0);
		}
		void print(int r_value)
		{
			if(r_value==1)
			cout<<"entered number is Armstrong number"<<endl;
			else
			cout<<"entered number is not Armstrong number"<<endl;
		}
};
int main()
{
	CheckArmstrong ca;
	ca.getdata();
	int Return_value=ca.check();
	ca.print(Return_value);
}

#include<iostream>
using namespace std;
class Simple_Intrest
{
	public:
		int Principle_bal,Int_Rate,Time;
		void GetData()
		{
			cout<<"principle balance,intrest rate,time"<<endl;
			cin>>Principle_bal>>Int_Rate>>Time;
		}
		void Cal_SimpleIntrest()
		{
			cout<<"final amount including simple intrest "<<Principle_bal(1+Int_Rate*Time);
		}
};
int main()
{
	 Simple_Intrest s;
	s.GetData();
	s.Cal_SimpleIntrest();
}

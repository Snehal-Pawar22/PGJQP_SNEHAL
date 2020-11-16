#include<iostream>
using namespace std;
class Check_Positive
{
	public:
	int num;
	void getData()
	{
		cout<<"enter any number"<<endl;
		cin>>num;
	}
	 public:
	 int check()
	{
		if(num>0)
		return(1);
		else if(num<0)
		return(-1);
		else
		return(0);
	}
};
int main()
{
	int reurn_value;
	Check_Positive cp;
	cp.getData();
	reurn_value= cp.check();
	
	if(reurn_value==1)
	cout<<"number is positive"<<endl;
	else if(reurn_value==-1)
	cout<<"number is negative"<<endl;
	else
	cout<<"number is zero"<<endl;
}

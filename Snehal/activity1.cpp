#include<iostream>
using namespace std;
class Ticket
{
	
	public:void booking()
	{
		int tid,no_of_passanger;
		String name[20];
		String source[20];
		String dest[30];
		cout<<"enter name source , destination and number of passangers"<<endl;
		cin>>name>>source>>dest>>no_of_passanger;
		for(int i=0;i<20;i++)
		{
			tid=101;
			tid++;
		}
		
	}
	public:
	 status(String s)
	
	{
		int f;
		if(String s=="confirm")
		{
			//cout<<"your ticket is confirm"<<endl;
			f=1;
		}	
		else
		{
			//cout<<"sorry your ticket is in waiting list"<<endl;
			f=0;
		}
		
		return(f);
	}
	public:void print(String Status)
	{
		cout<<"your ticket is confirm"<<endl;
		cout<<"Name:  "<<name<<" ticket id"<<endl<<tid<<"source "<<source<<"destination"<<dest<<endl;
		
	}
	
	
};
int main()
{
	Ticket t;
	String stat;
	t.booking();
	cout<<"enter your ticket status(confirm/waiting)"<<endl;
	cin>>stat;
	t.status(stat);
	if(t.status()==1)
	{
		t.print();
	}
	else
	{
		cout<<"sorry your ticket is not confirm"<<endl;
		
	}
	return(0);
	
}

#include<iostream>
using namespace std;
char name[20],source[20],dest[20];
long int cont_No;
class Ticket
{
	public:
		void booking()
		{
			
			
			cout<<"enter name contact number source and destination"<<endl;
			cin>>name>>cont_No>>source>>dest;
			
		}
		int status()
		{
			char stat;
			int f=0;
			cout<<"enter your ticket status(confirm/waiting)"<<endl;
			cin>>stat;
			if(stat=='confirm')
			{
				f=1;
			}
			/*else
			{
				return (0);
			}*/
		}
		void print()
		{
			cout<<"YOUR TICKET IS CONFIRM...."<<endl;
			cout<<"\t Name:  "<<name<<endl;
			cout<<"\t Contact Number:  "<<cont_No<<endl;
			cout<<"\t Source:   "<<source<<endl;
			cout<<"\t Destination:   "<<dest<<endl;
		}
};
int main()
{
	Ticket t;
	t.booking();
	t.status();
	if(t.status()==1)
	{
		t.print();
	}
	else
	{
		cout<<"Sorry your ticket is not confirm...."<<endl;
	}
}

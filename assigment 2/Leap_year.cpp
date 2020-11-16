#include<iostream>
using namespace std;
class Check_year
{
	public:
		int year;
		void getdata()
		{
			cout<<"enter a year"<<endl;
			cin>>year;
		}
		int check()
		{
			if(year%4==0)
			return(1);
			else
			return(0);
		}
		void print(int r_value)
		{
			if(r_value==1)
			cout<<"entered year is leap year"<<endl;
			else
			cout<<"entered year is not leap year"<<endl;
		}
		
};
int main()
{
	int return_value;
	Check_year cy;
	cy.getdata();
	return_value=cy.check();
	cy.print(return_value);
}

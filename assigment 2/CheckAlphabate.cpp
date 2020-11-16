#include<iostream>
using namespace std;
class Check_Alphabate
{
	public:
		char character;
	void getdata()
	{
		cout<<"enter any character"<<endl;
		cin>>character;
	}
	int check()
	{
		if(character>='a'&&character<='z'||character>='A'&&character<='Z')
		return(1);
		else
		return(0);
	}
	void print(int x)
	{
		if(x==1)
		{
			cout<<"entered character is alphabate"<<endl;
		}
		else
		cout<<"entered character is nonalphabate"<<endl;
	}
};
int main()
{
	Check_Alphabate check;
	int Return_value;
	check.getdata();
	Return_value=check.check();
	check.print(Return_value);
}

#include<iostream>
using namespace std;
class Check_Upper
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
		if(character>='A'&&character<='Z')
		return(1);
		else
		return(0);
	}
	void print(int x)
	{
		if(x==1)
		{
			cout<<"entered character is in upper case"<<endl;
		}
		else
		cout<<"entered character is in lower case"<<endl;
	}
};
int main()
{
	Check_Upper cu;
	cu.getdata();
	int return_val;
	return_val=cu.check();
	cu.print(return_val);
}


#include<iostream>
using namespace std;
class AddNaturalNum
{
	public:
	int sum=0;
	void display()
	{
		for(int i=1;i<=10;i++)
		{
			sum=sum+i;
		}
		cout<<"addition ="<<sum<<endl;
	}
};
int main()
{
	AddNaturalNum a;
	a.display();
}

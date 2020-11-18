#include<iostream>
using namespace std;
class MultiplicationTable
{
	public:
		int num;
		void getdata()
		{
			cout<<"enter any number  ";
			cin>>num;
		}
		void show()
		{
			for(int i=1;i<=10;i++)
			{
				cout<<num*i<<endl;
			}
		}
};
int main()
{
	MultiplicationTable m;
	m.getdata();
	m.show();
}

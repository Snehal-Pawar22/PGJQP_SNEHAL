#include<iostream>
using namespace std;
class PrintAtoZ
{
	public:
	void print()
	{
		for (char i='A';i<='Z';i++)
		{
			cout<<i<<"\t";
		}
	}
};
int main()
{
	PrintAtoZ p;
	p.print();
}

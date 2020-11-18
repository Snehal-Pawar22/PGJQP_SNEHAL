#include<iostream>
using namespace std;
class Display10to1
{
	public:
		int counter;
		void Show()
		{
			for(counter=10;counter>=1;counter--)
			{
				cout<<counter<<endl;
			}
		}
};
int main()
{
	Display10to1 d;
	d.Show();
}

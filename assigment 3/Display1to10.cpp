#include<iostream>
using namespace std;
class Display_Number
{
	public:
		int counter;
		void Show()
		{
			for(counter=1;counter<=10;counter++)
			{
				cout<<counter<<endl;
			}
		}
};
int main()
{
	Display_Number d;
	d.Show();
}

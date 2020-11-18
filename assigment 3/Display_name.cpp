#include<iostream>
using namespace std;
class Display_Name
{
	public:
		int counter;
		void show()
		{
			for(counter=0;counter<5;counter++)
			{
				cout<<counter+1<<" Snehal"<<endl;
			}
		}
};
int main()
{
	Display_Name d;
	d.show();
} 

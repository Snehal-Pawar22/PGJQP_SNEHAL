#include<iostream>
using namespace std;
class DisplayOdd
{
	public:
		int i;
		void ShowOdd()
		{
			
				for(i=0;i<100;i++)
				{
					if((i%2)!=0)
					{
						cout<<i<<endl;
					}
				}
			
		}
};
int main()
{
	DisplayOdd d;
	d.ShowOdd();	
}

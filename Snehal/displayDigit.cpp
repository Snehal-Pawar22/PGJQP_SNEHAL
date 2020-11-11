#include<iostream>
using namespace std;
class DisplayInt
{
	public :
		void print()
		{
		
	int n;
	cout<<"enter any digit"<<endl;
	cin>>n;
	cout<<"your entered number is\t"<<n<<endl;
}
};
int main()
{
	DisplayInt d;
	d.print();	
}

#include<iostream>
using namespace std;
class DisplayData
{
	public :
		void print()
		{
		
	int n;
	char c;
	float f;
	char s[20];
	cout<<"enter any integer,character,float,string"<<endl;
	cin>>n>>c>>f>>s;
	cout<<"your entered number is\t"<<n<<endl;
	cout<<"your entered character is\t"<<c<<endl;
	cout<<"your entered float is\t"<<f<<endl;
	cout<<"your entered string is\t"<<s<<endl;
}
};
int main()
{
	DisplayData d;
	d.print();	
}

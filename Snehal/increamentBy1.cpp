#include<iostream>
using namespace std;
class Increament
{
	public:
		int n;
		void IncreamentNum()
		{
			cout<<"enter any number"<<endl;
			cin>>n;
			n=n+1;
			cout<<"number increamented by 1 \t answer is"<<n<<endl;
			
		}
};
int main()
{
	Increament i;
	i.IncreamentNum();
}

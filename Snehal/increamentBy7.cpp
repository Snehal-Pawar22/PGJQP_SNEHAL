#include<iostream>
using namespace std;
class IncreamentBy7
{
	public:
		int n;
		void IncreamentNum()
		{
			cout<<"enter any number"<<endl;
			cin>>n;
			n=n+7;
			cout<<"number increamented by 7 \t answer is"<<n<<endl;
			
		}
};
int main()
{
	IncreamentBy7 i;
	i.IncreamentNum();
}

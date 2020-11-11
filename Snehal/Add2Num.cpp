#include<iostream>
using namespace std;
class Add2Num
{
	public:
		int n1,n2,result;
		void add()
		{
			cout<<"enter any two number"<<endl;
			cin>>n1>>n2;
			result=n1+n2;
			cout<<"addition is \t"<<result<<endl;
		}
};
int main()
{
	Add2Num a;
	a.add();
}

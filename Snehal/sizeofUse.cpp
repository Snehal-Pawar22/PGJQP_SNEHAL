#include<iostream>
using namespace std;
class SizeOfUse
{
	public:
		int num;
		char Name;
		float f1;
		double d1;
		void SizeOf_Ex()
		{
			cout<<"size of integer "<<sizeof(num)<<endl;
			cout<<"size of character "<<sizeof(Name)<<endl;
			cout<<"size of float "<<sizeof(f1)<<endl;
			cout<<"size of double "<<sizeof(d1)<<endl;
		}
};
int main()
{
	SizeOfUse s;
	s.SizeOf_Ex();
}

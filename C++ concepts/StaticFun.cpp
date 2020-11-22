#include<iostream>
using namespace std;
class StaticFun
{
	public:
	static void show();
};
void StaticFun::show()
{
	cout<<"in static function"<<endl;
}
int main()
{
	
	StaticFun::show();
	
}

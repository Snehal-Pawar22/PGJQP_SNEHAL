#include<iostream>
using namespace std;
class Circle
{
	public:
		int r;
		void GetData()
		{
			cout<<"enter radious of cirle"<<endl;
			cin>>r;
		}
		void Circle_Area()
		{
			cout<<"area of the circle is  "<<3.14*r*r<<endl;
		}
};
int main()
{
	Circle c;
	c.GetData();
	c.Circle_Area();
}

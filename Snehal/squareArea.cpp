#include<iostream>
using namespace std;
class SquareArea
{
	public:
		int side,area;
		void calculateArea()
		{
			cout<<"enter side of square"<<endl;
			cin>>side;
			area=side*side;
			cout<<"area of square\t"<<area<<endl;
			
		}
};
int main()
{
	SquareArea s;
	s.calculateArea();
 } 

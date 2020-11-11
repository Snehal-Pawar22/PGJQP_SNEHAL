#include<iostream>
using namespace std;
class Rectangle
{
	public:
		int l,w;
		void GetData()
		{
			cout<<"enter lenghth and width of rectagle"<<endl;
			cin>>l>>w;
		}
		void Rect_Area()
		{
			cout<<"area of the rectangle= "<<l*w<<endl;
		}
		void Rect_Perimeter()
		{
			cout<<"perimeter of the rectangle= "<<2*(l+w)<<endl;
		}
};
int main()
{
	Rectangle r;
	r.GetData();
	r.Rect_Area();
	r.Rect_Perimeter();
}

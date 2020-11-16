#include<iostream>
using namespace std;
class Check_Vowel
{
	public:
		char character;
	void getdata()
	{
		cout<<"enter any character"<<endl;
		cin>>character;
	}
	int check()
	{
		if(character=='a'||character=='A'||character=='I'||character=='i'||character=='e'||character=='E'||character=='o'||character=='O'||character=='u'||character=='U')
		return(1);
		else
		return(0);
	}
	void print(int x)
	{
		if(x==1)
		{
			cout<<"entered character is vowel"<<endl;
		}
		else
		cout<<"entered character is consonant"<<endl;
	}
};
int main()
{
	Check_Vowel cv;
	int Return_value;
	cv.getdata();
	Return_value=cv.check();
	cv.print(Return_value);
}

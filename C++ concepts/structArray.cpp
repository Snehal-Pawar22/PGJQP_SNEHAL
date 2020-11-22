#include<iostream>
#include<string.h>
using namespace std;
	struct student
	{
		int sid;
		char name[30];
		char course[20];
	};
int main()
{
	struct student s[3];
	void getData()
	{
		for(int i=0;i<3;i++)
		{
			
			cout<<"enter student id,name and course"<<endl;
			cin>>s[i].sid>>s[i].name>>s[i].course;
		}
	}
	void Display()
	{
		for(int i=0;i<3;i++)
		{
		
		cout<<i+1"student Detail-----"<<endl;
		cout<<"Id"<<s[i].sid<<endl;
		cout<<"name"<<s[i].name<<endl;
		cout<<"course"<<s[i].course<<endl;
	}
	}
}

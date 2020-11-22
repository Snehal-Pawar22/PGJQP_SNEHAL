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
	struct student s;
	s.sid=101;
	strcpy(s.name,"snehal");
	strcpy(s.course,"pgjqp");
	cout<<"student ID :"<<s.sid<<endl;
	cout<<"student name :"<<s.name<<endl;
	cout<<"student class :"<<s.course<<endl;
}

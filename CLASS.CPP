#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	public:
		char name[10],surname[10],address[100];
		int id;

	void data()
	{
		cout<<"\n enter the detail of the student";
		cout<<"\n enter the name of student=";
		cin>>name;
		cout<<"\n enter the surname of student=";
		cin>>surname;
		cout<<"\n enter the address of the student=";
		cin>>address;
		cout<<"\n enter the id of the student=";
		cin>>id;
		}
	void display()
	{
		cout<<"the name of student is="<<name;
		cout<<"\n the surname of student is="<<surname;
		cout<<"\n the address of the student is="<<address;
		cout<<"\n the id of the student is="<<id;
	}
};

void main()
{
	clrscr();
	student s;
	s.data();
	s.display();
	getch();
}

#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{

	char name[5],surname[10],address[10];
	int id;
	public:
	void set();
	void display();
};
void student:: set()
{
	cout<<"\n enter the name of student=";
	cin>>name;
	cout<<"\n enter the surname of student=";
	cin>>surname;
	cout<<"\n enter the address of the student=";
	cin>>address;
	cout<<"\n enter the id of the student=";
	cin>>id;

}
void student::display()
{
	cout<<"\n the name of student is="<<name;
	cout<<"\n the surname of student is="<<surname;
	cout<<"\n the address of the student is="<<address;
	cout<<"\n the id of the student is="<<id;
}
void main()
{
	clrscr();
	student s;
	s.set();
	s.display();
	getch();
}



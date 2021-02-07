#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	public:
		char name[5],surname[10],address[20];
		int id;

	 student()
	{

		cout<<"\n enter the details of student....";
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
		cout<<"\n the name of student is="<<name;
		cout<<"\n the surname of student is="<<surname;
		cout<<"\n the address of student is="<<address;
		cout<<"\n the id of the student is="<<id;
	 }
};
void main()
{
	clrscr();
	student c ;
	c.display();

	getch();
}


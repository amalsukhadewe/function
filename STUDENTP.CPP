#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
	public:
	char name,surname,address;
	int id;

	student(char a ,char b,char c,int d)
	{
		a=name;
		b=surname;
		c=address;
		d=id;
	}
	void display()
	{
		cout<<"\n enter the detail of the student";
		cout<<"\n enter the name of student"<<name;

		cout<<"\n enter the surname of the student="<<surname;

		cout<<"\n enter the address of the student="<<address;

		cout<<"\n enter the id of the student="<<id;

	}
};
void main()
{
	clrscr();
	student s("amal","sukhadewe","nagpur",123);
	s.display();
	getch();
}


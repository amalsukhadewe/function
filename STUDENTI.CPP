#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	private:
		char name[5],address[10];
		int id;
	public:
	void stud()
	{
		cout<<"\n enter the name of student=";
		cin>>name;
		cout<<"\n enter the address of student=";
		cin>>address;
		cout<<"\n enter the id  of student=";
		cin>>id;
	}
};
class exam:public student
{
	public:
		int  paper1,paper2;

	void setpaper()
	{
		cout<<"\n enter the marks of paper=";
		cin>>paper1;
		cout<<"\n enter the marks of second paper=";
		cin>>paper2;
	}
	void displaypaper()
	{
		cout<<"\n the marks of paper1 is="<<paper1;
		cout<<"\n the marks of paper2 is="<<paper2;
	}
};
class sport
{
	public:
	int sportmarks;

	void setmark()
	{
		cout<<"\n enter the marks of sport=";
		cin>>sportmarks;
	}
	void dismark()
	{
		cout<<"\n the marks of sport is="<<sportmarks;
	}
};
class result:public exam,public sport
{
	private:
		int z;
	public:
	void totalmarks()
	{
		z=paper1+paper2+sportmarks;
		cout<<"\n the total marks is="<<z;
	}
};
void main()
{
	clrscr();
	result r;
	r.stud();
	r.setpaper();
	r.displaypaper();
	r.setmark();
	r.dismark();
	r.totalmarks();
	getch();
}
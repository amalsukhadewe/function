#include<iostream.h>
#include<conio.h>
class one
{
	virtual void dis()=0;
};
class two:public one
{
	public:
	void dis()
	{
		cout<<"two";
	}
};
void main()
{
	clrscr();
	two t;
	t.dis();
	getch();
}






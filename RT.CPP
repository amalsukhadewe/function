#include<iostream.h>
#include<conio.h>

class one
{
	public:
	virtual void fun()
	{
		cout<<"\n hii this is amal...";

	}
};
class two:public one
	{
		public:
		void fun()
		{
			cout<<"\n hii this is rama";
		}
};
void main()
{
	clrscr();
	one ob, *obpt;
	obpt=&ob;
	obpt->fun();

	two ob2;
	obpt=&ob2;
	obpt->fun();


	getch();
}
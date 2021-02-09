#include<iostream.h>
#include<Conio.h>
#include<string.h>
class one
{
	public:
	char *name;
	int len;
		one()
		{
			len=0;
			name=new char[len];
		}
		one(char n[])
		{
			len=strlen(n);
			name=new char[len+1];
			strcpy(name,n);
		}
		void display()
		{
			cout<<name<<"="<<len<<endl;
		}
	};
		void main()
		{
			clrscr();
			one obj("amal"),obj1("amal1"),obj2("amal123");
			obj.display();
			obj1.display();
			obj2.display();
			getch();
		}
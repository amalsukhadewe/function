#include<fstream.h>
#include<conio.h>
void main()
{
	clrscr();
	char str[2000];
	fstream file("file.txt",ios::in);
	file.close();
	cout<<endl;
	getch();
}
#include<fstream.h>
#include<conio.h>
void main()
{
	clrscr();
	 char str[2000];
	fstream file("file.txt",ios::in);

	fstream file1("file1.txt",ios::out);
	while(!file.eof())
	{        file.getline(str,2000);
	cout<<str;
		file1<<str<<endl;
	}
	file.close();
	cout<<endl;
	getch();
}
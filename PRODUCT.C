#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d, z1,z2,z3,z4;
	clrscr();
	printf("\n there are four product are available ");
	printf("\n 1)dal which is 100rs per kg");
	printf("\n 2)rice which is 200rs per kg");
	printf("\n 3)wheat which is 120 rs per kg");
	printf("\n 4)chana which is 70rs per kg");
	printf("\n enter how many kg of dal you want=");
	scanf("%d",&z1);
	a=100*z1;
	printf("the bill of dal is=%d",a);
	printf("\n enter how many kg of rice you want=");
	scanf("%d",&z2);
	b=200*z1;
	printf("the bill of dal is=%d",b);
	printf("\n enter how many kg of wheat you want=");
	scanf("%d",&z3);
	c=120*z1;
	printf("the bill of dal is=%d",c);
	printf("\n enter how many kg of chana you want=");
	scanf("%d",&z4);
	d=70*z1;
	printf("the bill of dal is=%d",d);
	printf("\n final bill of your product is=");
	printf("\n 1)dal=%drs \t 2)rice=%drs \t 3)wheat=%drs \t 4)chana=%drs",a,b,c,d);

	getch();

}
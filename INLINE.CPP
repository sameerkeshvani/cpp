#include<iostream.h>
#include<conio.h>
inline int sq(int x)
{
	int p;
	p = x*x;
	return p;
}
void main()
{
	int n;
	clrscr();
	cout<<"Enter Number\n";
	cin>>n;
	cout<<"Square is "<<sq(n);
	getch();
}
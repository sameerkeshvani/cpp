#include<iostream.h>
#include<conio.h>
inline int max(int a, int b)
{
	return((a>b)?a:b);
}
inline int min(int a, int b)
{
	return((a<b)?a:b);
}
int main()
{
	int a,b;
	clrscr();
	cout<<"Enter 2 Numbers\n";
	cout<<"Enter 1 Number\n";
	cin>>a;
	cout<<"Enter 2 NUmber\n";
	cin>>b;
	cout<<"The Maximum Number Is "<<max(a,b)<<"\n";
	cout<<"The MInimum Number Is "<<min(a,b)<<"\n";
	getch();
	return 0;
}
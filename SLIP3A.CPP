#include<iostream.h>
#include<conio.h>
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"After Swapping:\n";
	cout<<*a<<"\t"<<*b;
}
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter 1 Value\n";
	cin>>a;
	cout<<"Enter 2 Value\n";
	cin>>b;
	swap(&a,&b);
	getch();
}
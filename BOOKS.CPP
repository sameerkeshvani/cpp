#include<iostream.h>
#include<conio.h>
class books
{
	private:
		int year;
		char title[100],author[15];
	public:
		void getdata();
		void displaydata();
};
void books::getdata()
{
	cout<<"Enter Title Of Book\n";
	cin>>title;
	cout<<"Enter Author Of Book\n";
	cin>>author;
	cout<<"Enter Year Published\n";
	cin>>year;
}
void books::displaydata()
{
	cout<<title<<"Book Was Written By"<<author<<"In Year"<<year<<"\n";
}
void main()
{
	books b1[5];
	clrscr();
	for(int i=0;i<5;i++)
	{
		b1[i].getdata();
		b1[i].displaydata();
	}
	getch();
}
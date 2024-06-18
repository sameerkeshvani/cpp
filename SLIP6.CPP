#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class square
{
	private:
		int side;
	public:
		void getdata()
		{
			cout<<"Enter Side Of Square\n";
			cin>>side;
		}
		int caldata()
		{
			return(side*side);
		}
		friend void compare(int ss1, int rr1);
};
class rectangle
{
	private:
		int leng, bread;
	public:
		void getdata()
		{
			cout<<"Enter Length And Breadth\n";
			cin>>leng>>bread;
		}
		int caldata()
		{
			return(leng * bread);
		}
		friend void compare(int ss1, int rr1);
};
void compare(int ss1, int rr1)
{
	if(ss1>rr1)
	{
		cout<<"Square Area Is Greater Than Rectangle\n";
	}
	else
	{
		cout<<"Rectangle Area Is Greater Than Square\n";
	}
}
void main()
{
	square s1;
	rectangle r1;
	int ss1, rr1;
	clrscr();
	s1.getdata();
	ss1 = s1.caldata();
	r1.getdata();
	rr1 = r1.caldata();
	compare(ss1,rr1);
	getch();
}
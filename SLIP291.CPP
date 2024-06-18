#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class ebill
{
	private:
		char cname[20];
		int mid,noofunit,total,additional;
	public:
		void getdata()
		{
			cout<<"Enter Customer Name : \n";
			cin>>cname;
			cout<<"Enter Meter ID :	\n";
			cin>>mid;
			cout<<"Enter No. Of Units : \n";
			cin>>noofunit;
		}
		void caldata()
		{
			if(noofunit <= 100)
			{
				total = noofunit * 1;
			}
			else if(noofunit > 100 && noofunit <= 300)
			{
				noofunit = noofunit - 100;
				total = 100 + (noofunit * 2);
			}
			else
			{
				noofunit = noofunit - 300;
				total = 500 + (noofunit * 5);
			}
			if(total < 150)
			{
				total = 150;
			}
			else if(total > 250)
			{
				additional = (total * 15)/100;
			}
			total = total + additional;
		}
		void display()
		{
			cout<<"Customer Name : "<<cname<<"\n";
			cout<<"Meter ID : "<<mid<<"\n";
			cout<<"No. Of Units : "<<noofunit<<"\n";
			cout<<"Total Bill : "<<total<<"\n";
		}
};
void main()
{
	ebill e1;
	clrscr();
	e1.getdata();
	e1.caldata();
	e1.display();
	getch();
}
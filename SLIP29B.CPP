#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class visitingstaff
{
	private:
		char name[20],nameofsubject[15][15];
		int noofsubject,workinghours,rate,totalsalary;
	public:
		void getdata();
		void calsalary(int rate=300)
		{
			cout<<"Enter Working Hours\n";
			cin>>workinghours;
			totalsalary = workinghours*rate;
		}
		void display();
};
void visitingstaff::getdata()
		{
			cout<<"Enter Name\n";
			cin>>name;
			cout<<"Enter Number Of Subjects\n";
			cin>>noofsubject;
			for(int i=0;i<noofsubject;i++)
			{
				cout<<"Enter Subject Name\n";
				cin>>nameofsubject[i];
			}
		}
void visitingstaff::display()
		{
			cout<<"Name :"<<name<<"\n";
			cout<<"Subjects:\n";
			for(int i=0;i<noofsubject;i++)
			{
				cout<<nameofsubject[i]<<"\n";
			}
			cout<<"Salary :"<<totalsalary<<"\n";
		}
void main()
{
	visitingstaff v1[5];
	int n;
	clrscr();
	cout<<"How Many Record Need To Be Entered\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		v1[i].getdata();
		v1[i].calsalary();
	}
	for(i=0;i<n;i++)
	{
		v1[i].display();
	}
	getch();
}
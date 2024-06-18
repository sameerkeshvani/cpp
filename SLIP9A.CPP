#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class person
{
	private:
		char name[20];
		char addr[30];
		float salary, net_salary;
		float tax_amount;
	public:
		void getdata()
		{
			cout<<"Enter Name\n";
			cin>>name;
			cout<<"Enter Address\n";
			cin>>addr;
			cout<<"Enter Salary\n";
			cin>>salary;
		}
		void tax_amount_calc()
		{
			if(salary <=20000)
			{
				tax_amount = 0;
			}
			else if(salary > 20000 || salary <=40000)
			{
				tax_amount = (salary * 5)/100;
			}
			else
			{
				tax_amount = (salary * 10)/100;
			}
		}
		void display()
		{
			cout<<"Name : "<<name<<"\n";
			cout<<"Address : "<<addr<<"\n";
			cout<<"Gross Salary : "<<salary<<"\n";
			cout<<"Tax Amount : "<<tax_amount<<"\n";
			net_salary = salary - tax_amount;
			cout<<"Net Salary : "<<net_salary<<"\n";
		}
};
void main()
{
	person p1;
	clrscr();
	p1.getdata();
	p1.tax_amount_calc();
	p1.display();
	getch();
}
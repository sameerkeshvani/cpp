#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class fixdeposit
{
	private:
		float interest,fd_no,fd_amt,maturity_amt,int_rate,no_of_month;
		char cust_name[20];
	public:
		void getdata()
		{
			cout<<"Enter Fixed Deposit Number\n";
			cin>>fd_no;
			cout<<"Enter Fixed Deposit Amount\n";
			cin>>fd_amt;
			cout<<"Enter No. Of Month\n";
			cin>>no_of_month;
		}
		void calcint(int int_rate = 5)
		{
			interest = (fd_amt*int_rate*no_of_month)/1200;
			maturity_amt = fd_amt + int_rate;
		}
		void display()
		{
			cout<<"Fixed Deposit Number : "<<fd_no<<"\n";
			cout<<"Fixed Deposit Amount : "<<fd_amt<<"\n";
			cout<<"Interest : "<<interest<<"\n";
			cout<<"Maturity Amount :"<<maturity_amt<<"\n";
		}
};
void main()
{
	fixdeposit f1;
	clrscr();
	f1.getdata();
	f1.calcint();
	f1.display();
	getch();
}
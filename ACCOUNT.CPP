#include<iostream.h>
#include<conio.h>
class account
{
	private:
		int p,r,n,si;
	public:
		void getdata();
		void calculatedata();
		void displaydata();
};
void account::getdata()
	      {
			cout<<"Insert Principal Amount\n";
			cin>>p;
			cout<<"Insert Rate Of Interest\n";
			cin>>r;
			cout<<"Insert Number Of Years\n";
			cin>>n;
	      }
void account::calculatedata()
	      {
			si=p*r*n/100;
	      }
void account::displaydata()
	      {
			cout<<"Simple Interest Is"<<si<<"\n";
	      }
void main()
{
	account a1;
	clrscr();
	a1.getdata();
	a1.calculatedata();
	a1.displaydata();
	getch();
}

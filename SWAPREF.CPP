#include<iostream.h>
#include<conio.h>
void swap(int *c,int *d)
{
 int dummy;
 dummy=*c;
 *c=*d;
 *d=dummy;
 cout<<*c<<*d<<"\n";
}
int main()
{
 int x=20,y=10;
 clrscr();
 swap(&x,&y);
 cout<<x<<y;
 getch();
 return 0;
}
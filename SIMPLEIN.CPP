#include<iostream.h>
#include<conio.h>
int sint(int p,int n,int r=3);
int main()
{
 clrscr();
 cout<<sint(100,1);
 getch();
 return 0;
}
int sint(int p,int n,int r)
{
 int si;
 si=p*r*n/100;
 return si;
}

#include<iostream.h>
#include<conio.h>
int mul(int a,int b=2,int c=3,int d=4);
int main()
{
 clrscr();
 cout<<mul(1,5)<<"\n";
 cout<<mul(3,1,4)<<"\n";
 cout<<mul(6)<<"\n";
 cout<<mul(5,2,1,3)<<"\n";
 getch();
 return 0;
}
int mul(int a,int b,int c,int d)
{
 int product;
 product=a*b*c*d;
 return product;
}
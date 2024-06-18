#include<iostream.h>
#include<conio.h>
void volume(int cyr, int cyh)
{
	float vol;
	vol = 3.14*cyr*cyr*cyh;
	cout<<"The Volume Of Cylinder Is "<<vol<<"\n";
}
void conevol(int cor, int coh)
{
	float vol;
	vol = (3.14*cor*cor*coh)/3;
	cout<<"The Volume Of Cone Is "<<vol<<"\n";
}
void volume(int spr)
{
	float vol;
	vol=(3.14*spr*spr*spr)/4;
	cout<<"The Volume Of Sphere Is "<<vol<<"\n";
}
void main()
{
	int cyh, cyr, coh, cor, spr;
	clrscr();
	cout<<"Cylinder\n";
	cout<<"Enter Radius : \n";
	cin>>cyr;
	cout<<"Enter Height :\n";
	cin>>cyh;
	cout<<"Cone\n";
	cout<<"Enter Radius :\n";
	cin>>cor;
	cout<<"Enter Height :\n";
	cin>>coh;
	cout<<"Sphere\n";
	cout<<"Enter Radius : \n";
	cin>>spr;
	volume(cyr, cyh);
	conevol(cor, coh);
	volume(spr);
	getch();
}

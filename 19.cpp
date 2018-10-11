#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	int n,i,k,x,y,h,o,z,vf,p;
	cout<<"Insira um número na base 10: "<<endl;
	cin>>n;
	vf=0;
	p=n;
	h=0;
	i=n;
	while (i!=0)
	{
		i=i/10;
		h++;
	}
	k=1;
	o=0;
	while (o!=h)
	{
		o++;
		z=n%8;
		vf=vf+(z*k);
		k=k*10;
	}
	cout<<"Resultado: "<<vf<<endl;
}

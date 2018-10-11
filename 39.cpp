#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	float m,t,i;
	int teh,tem,tes;
	cout<<"Insira a massa incial do material:"<<endl;
	cin>>m;
	while (m>=0.5)
	{
		i=m/2;
		t=i+50;
	}
	teh=t*3600;
	tem=teh/60;
	tes=tem%60;
	cout<<"A massa incial é: "<<m<<endl;
	cout<<"O tempo será: "<<teh<<" horas "<<tem<<" minutos e "<<tes<<" segundos"<<endl;
}

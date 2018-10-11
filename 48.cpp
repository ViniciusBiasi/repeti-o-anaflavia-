#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	int i,ndi,s,ndtc,ndtp;
	float sf,sl;
	cout<<"Insira o salário fixo dos funcionários:"<<endl;
	cin>>sf;
	i=0;
	while (i!=2)
	{
		s=0;
		i++;
		cout<<"Insira o número de inscrição do funcionário: "<<endl;
		cin>>ndi;
		cout<<"Insira o número de televisores a cores vendidos:"<<endl;
		cin>>ndtc;
		cout<<"Insira o número de televisores preto e branco vendidos:"<<endl;
		cin>>ndtp;
		
		if (ndtc>=10){
			s=s+(ndtc*100);}
			else {
				s=s+(ndtc*50);}
			
		if (ndtp>=20){
			s=s+(ndtp*40);}
			else {
				s=s+(ndtp*20);}
			
		cout<<"Salário bruto: "<<s+sf<<endl;
		
		sl=(sf*0.92)+s;
		
		if (sl>=3000){
			cout<<"O salário final será de: "<<sl*0.95<<endl;}
			else {
				cout<<"O salário final será de: "<<sl<<endl;}
	}
}

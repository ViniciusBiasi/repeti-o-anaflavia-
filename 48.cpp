#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	int i,ndi,s,ndtc,ndtp;
	float sf,sl;
	cout<<"Insira o sal�rio fixo dos funcion�rios:"<<endl;
	cin>>sf;
	i=0;
	while (i!=2)
	{
		s=0;
		i++;
		cout<<"Insira o n�mero de inscri��o do funcion�rio: "<<endl;
		cin>>ndi;
		cout<<"Insira o n�mero de televisores a cores vendidos:"<<endl;
		cin>>ndtc;
		cout<<"Insira o n�mero de televisores preto e branco vendidos:"<<endl;
		cin>>ndtp;
		
		if (ndtc>=10){
			s=s+(ndtc*100);}
			else {
				s=s+(ndtc*50);}
			
		if (ndtp>=20){
			s=s+(ndtp*40);}
			else {
				s=s+(ndtp*20);}
			
		cout<<"Sal�rio bruto: "<<s+sf<<endl;
		
		sl=(sf*0.92)+s;
		
		if (sl>=3000){
			cout<<"O sal�rio final ser� de: "<<sl*0.95<<endl;}
			else {
				cout<<"O sal�rio final ser� de: "<<sl<<endl;}
	}
}

#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	float con,v,vt,esg,icms,ma,mb,tesg,vtc,ndc,vticms;
	string n,end,nb,endb,na,enda;
	int cod,a;
	vticms=0;
	mb=0;
	ma=0;
	tesg=0;
	vtc=0;
	ndc=0;
	cout<<"Digite 0 para parar."<<endl;
	cout<<"C�digo do consumidor:"<<endl;
	cin>>cod;
	while (cod!=0)
	{
		cout<<"Nome do consumidor:"<<endl;
		cin>>n;
		cout<<"Endere�o do consumidor:"<<endl;
		cin>>end;
		cout<<"Consumo do m�s em m3:"<<endl;
		cin>>con;
		cout<<"Ano da instala��o do registro:"<<endl;
		cin>>a;
		
		if (con<=200){
			v=con*0.5;
			esg=v*0.05;
			vt=v+esg;
			icms=vt*0.16;
			vt=vt+icms;}
			else if (con>=201 && con<=400){
				v=con*0.85;
				esg=v*0.1;
				vt=v+esg;
				icms=vt*0.16;
				vt=vt+icms;}
				else {
					v=con*1.5;
					esg=v*0.2;
					vt=v+esg;
					icms=vt*0.16;
					vt=vt+icms;}
		
		cout<<"O consumidor: "<<n<<"vai pagar: R$"<<vt<<endl;
				
		vticms=vticms+icms;
		
		if (con>=201 && con<=400 && vt>mb){
			mb=vt;
			nb=n;
			endb=end;}
		
		if (con<=200 && vt>ma){
			ma=vt;
			na=n;
			enda=end;}
			
		tesg=tesg+esg;
		
		vtc=vtc+vt;
		
		ndc++;
		
	}
	cout<<"Total de ICMS arrecado pelo estado de Goi�s: R$"<<vticms<<endl;
	cout<<"Nome e endere�o do maior consumidor da classe B. Nome:"<<nb<<". Endere�o: "<<endb<<endl; 
	cout<<"Nome e endere�o do maior consumidor da classe A. Nome:"<<na<<". Endere�o: "<<enda<<endl; 
	cout<<"Total arrecadado pela Saneago: R$"<<tesg<<endl;
	cout<<"M�dia de consumo de �gua de todos os consumidores: R$"<<vtc/ndc<<endl;
}

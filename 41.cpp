#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	char s,r;
	float i,nds,ndn,ndh,ndm,op1,op2;
	nds=0;
	ndn=0;
	ndh=0;
	ndm=0;
	op1=0;
	op2=0;
	for (i=0;i!=2000;i++)
	{
		cout<<"Sexo do entrevistado: (m ou f)"<<endl;
		cin>>s;
		cout<<"Resposta: (s ou n)"<<endl;
		cin>>r;
		
		if (r=='s'){
			nds++;}
			else {
				ndn++;}
				
		if (s=='m'){
			ndh++;}
			else {
				ndm++;}
				
		if (r=='s' && s=='f'){
			op1++;}
			else if (r=='n' && s=='m'){
				op2++;}
	}
	cout<<"Número de pessoas que responderam sim: "<<nds<<endl;
	cout<<"Número de pessoas que responderam não: "<<ndn<<endl;
	cout<<"Porcentagem de pessoas do sexo feminino que responderam sim: "<<(op1/ndm)*100<<"%"<<endl;
	cout<<"Porcentagem de pessoas do sexo masculino que responderam não: "<<(op2/ndh)*100<<"%"<<endl;
}

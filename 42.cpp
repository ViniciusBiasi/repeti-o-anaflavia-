#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	float cm,cf,ndv;
	int cod,cpv,mcod,maior,ct;
	maior=0;
	ct=0;
	cout<<"Insira o código do curso: "<<endl;
	cin>>cod;
	while (cod!=0)
	{
		cout<<"Insira o número de vagas: "<<endl;
		cin>>ndv;
		cout<<"Insira o número de candidatos do sexo masculino: "<<endl;
		cin>>cm;
		cout<<"Insira o número de candidatos do sexo feminino: "<<endl;
		cin>>cf;
		
		cpv=(cm+cf)/ndv;
		
		cout<<"O curso "<<cod<<" tem um total de: "<<cpv<<" por vaga."<<endl;
		cout<<"Existe um total de: "<<(cf/(cm+cf))*100<<"% de mulheres"<<endl;
		
		ct=ct+cm+cf;
		
		if (cpv>maior){
			maior=cpv;
			mcod=cod;}
			
		cout<<"Insira o código do curso: "<<endl;
		cin>>cod;
	}
	cout<<"Existe um total de "<<ct<<" candidatos."<<endl;
	cout<<"Curso de maior candidatos por vaga: "<<mcod<<endl;
}

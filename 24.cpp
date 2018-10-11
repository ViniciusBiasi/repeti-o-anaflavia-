#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	string n,nma,nmb;
	float m,soma,maior,menor,h;
	char s;
	int i,ndh,ndm;
	i=0;
	maior=0;
	menor=10000;
	ndh=0;
	ndm=0;
	soma=0;
	while (i!=70)
	{
		cout<<"Insira o nome:"<<endl;
		cin>>n;
		cout<<"Insira o sexo:"<<endl;
		cin>>s;
		cout<<"Insira a altura:"<<endl;
		cin>>h;
		
		i++;
		
		if (s=='m'){
			ndh++;}
			else {
				ndm++;
				soma=soma+h;}
		
		if (h>maior){
			maior=h;
			nma=n;}
		
		if (h<menor){
			menor=h;
			nmb=n;}
		
	}
	cout<<"Nome da pessoa mais alta do grupo: "<<nma<<endl;
	cout<<"Nome da pessoa mais baixa do grupo: "<<nmb<<endl;
	if (soma==0){
		cout<<"A média das alturas das mulheres é: 0"<<endl;}
		else {
		cout<<"A média das alturas das mulheres é: "<<soma/ndm<<endl;}
	cout<<"Número de homens: "<<ndh<<endl;
}
	

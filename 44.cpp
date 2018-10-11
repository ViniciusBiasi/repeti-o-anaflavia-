#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	int tdu,ndc;
	float maior,menor,qdk,pdk,tdu1,tdu2,tdu3,tap,qgp1,qgp2,qgp3,n,mg;
	maior=0;
	menor=100000000;
	tdu1=0;
	tdu2=0;
	tdu3=0;
	n=0;
	qgp3=0;
	qgp2=0;
	qgp1=0;
	cout<<"Parar o programa=0   Residencial=1   Comercial=2   Industrial=3."<<endl;
	cout<<"Insira o tipo de usuário:"<<endl;
	cin>>tdu;
	while (tdu!=0)
	{
		cout<<"Insira o número do consumidor:"<<endl;
		cin>>ndc;
		cout<<"Insira a quantidade de kWh consumidos durante o mês:"<<endl;
		cin>>qdk;
		cout<<"Insira o preço do kWh consumido:"<<endl;
		cin>>pdk;
			
		if (tdu==1){
			tdu1++; //quantos usuarios do tipo 1 existem
			qgp1=qdk*pdk;} //quantidade gasta pelo tipo 1
			else if (tdu==2){
			tdu2++; //quantos usuarios do tipo 2 existem
			qgp2=qdk*pdk;} //quantidade gasta pelo tipo 2
				else if (tdu==3){
				tdu3++; //quantos usuarios do tipo 3 existem
				qgp3=qdk*pdk;} //quantidade gasta pelo tipo 3

			
		if (qdk>maior){
			maior=qdk;} //definindo maior 
			if (qdk<menor){
				menor=qdk;} //definindo menor
				
				
		tap=qdk*pdk; //total a pagar por usuário
		
		n++;
		
		mg=((qgp1/pdk)+(qgp2/pdk)+(qgp3/pdk))/n; //média geral de consumo
		
		cout<<"O consumidor "<<ndc<<" gastou um total de R$"<<tap<<endl;
		
		cout<<"Insira o tipo de usuário:"<<endl;
		cin>>tdu;
	}
	cout<<"Maior consumo: "<<maior<<"Kwh"<<endl; 
  	cout<<"Menor consumo: "<<menor<<"Kwh"<<endl; 
  	cout<<"Media de consumo: "<<mg<<"Kwh"<<endl;
  	cout<<"Total residencial: R$"<<qgp1<<endl;
  	cout<<"Total comercial: R$"<<qgp2<<endl; 
  	cout<<"Total industrial: R$"<<qgp3<<endl;
  	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	float n1,n2,n3,nm,maior,menor,a,m;
	int ndm,p,ap,rep,rpf;
	a=0;
	maior=0;
	menor=1000;
	nm=0;
	ap=0;
	rep=0;
	rpf=0;
	while (a!=100)
	{
		cout<<"Insira o n�mero de matr�cula do aluno:"<<endl;
		cin>>ndm;
		cout<<"n1:"<<endl;
		cin>>n1;
		cout<<"n2:"<<endl;
		cin>>n2;
		cout<<"n3:"<<endl;
		cin>>n3;
		cout<<"Insira a quantidade de aulas comparecidas:"<<endl;
		cin>>p;
		
		m=(n1+n2+n3)/3;
		
		nm=nm+m; //soma das m�dias
		
		if (m>maior){
			maior=m;}
		if (m<menor){
			menor=m;}
			
		cout<<"Aluno: "<<ndm<<endl;
		cout<<"Frequ�ncia: "<<p<<" aulas."<<endl;
		cout<<"Nota final: "<<m<<endl;
		if (m>6 && p>40){
			cout<<"Aprovado";
			ap++;}
			else {
				cout<<"Reprovado";
				rep++;}
				
		if (m>6 && p<40){
			rep++;}
			
		a++;
		
		cout<<endl;
	}
	cout<<endl;
	cout<<"Maior m�dia: "<<maior<<endl;
	cout<<"Menor m�dia: "<<menor<<endl;
	cout<<"Nota m�dia da turma: "<<nm/2<<endl;
	cout<<"Alunos reprovados: "<<rep<<endl;
	cout<<"Porcentagem de alunos reprovados por infrequ�ncia: "<<rep<<"%"<<endl;
}

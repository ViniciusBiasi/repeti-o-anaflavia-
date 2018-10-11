#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

  int x, i, idade, num, candm=0, candf=0, xpmen=0, oldmen=0, menoridade=99, xpwomen=0;
	string sexo, exp; 
	float media;
	
	cout << "Quantas pessoas intrevistadas: "<<endl;
	cin >> x;
	
	
	cout << "Número de inscrição do candidato: "<<endl;
	cin >> num; 
	cout << "Sexo do funcionario: "<<endl;
	cin >> sexo;
	for(i=0; i<x; i++){
		
		cout << "NUMERO: "<<endl;
		cin >> num;
		
		cout << "idade:"<<endl;
		cin >> idade; 
		
		cout << "Sexo: "<<endl;
		cin >> sexo;
		
		cout << "Experiência no serviço (SIM ou NÃO)"<<endl;
		cin >> exp;
		
		
		if(sexo=="MASCULINO"){
			candm++;
			if(exp =="SIM")
			xpmen++;
			if(idade >= 45)
			oldmen++;
		}
		else if (sexo=="FEMININO"){
			candf++;
			if(exp=="SIM"){
				if(idade<35)
				xpwomen++;
				if(idade < menoridade)
				menoridade = idade;
			}
		}
	}
	media = (float)xpmen*100 / candm;
	cout << "MULHERES INSCRITAS COM EXPERIENCIA E IDADE MENOR QUE 35 ANOS = "<< xpwomen <<endl;
	cout << "CANDIDATOS MASCULINOS = " <<candm<< "CANDIDATOS FEMININO = " <<candf <<endl;
	cout << "MEDIA DE HOMENS COM EXPERIENCIA = " <<media <<endl;
	cout << "HOMENS COM MAIS DE 45 ANOS = "<< oldmen <<endl;
	cout << "MENOR IDADE DE MULHER COM EXPERIENCIA = " <<menoridade <<endl;
	return 0;
}

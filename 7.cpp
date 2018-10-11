#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float S=0;			// valor do somatorio
	int NUM=1;	// o numerador da expressao
	int FAT=1;	// denominador da expressao
	float T=0;			// o termo generico da serie
	int N=1;		// auxiliar no calculo do fatorial
	int I;		// contador do numero de termos
	int E=0;		// expoente
	int X;		// argumento lido
	float K;			// valor de e^x obtido pela funcao EXP
	float DIF=1;		// diferenca entre os valores
	


	cout << "Informe o valor de x: " <<endl;
	cin >>X ;



	while ( DIF > 0.0001 )
	{
		T = NUM / FAT;	

		S = S + T;		
		DIF = K - S;	
		DIF = abs(DIF);	//  valor absoluto

		E = E + 1;		
		NUM = X^E;	
		N = N + 1;		
		FAT = FAT * N;	

		I = I + 1;
	}
	cout << "O valor do argumento x e: " <<X <<endl;
	cout <<  "Valor calculado atraves da serie: " <<S <<endl;
	cout <<  "Valor dado pela funcao EXP: " <<K <<endl;
	cout <<  "Numero de termos utilizados:    " <<I <<endl;

}

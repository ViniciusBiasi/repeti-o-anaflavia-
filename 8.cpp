#include <iostream>
#include <math.h>
using namespace std;
int main ()
{



	int X;		// argumento lido
	float S;			// valor do somatorio
	float NUM;		// o numerador da expressao
	float DEN;		// denominador da expressao
	float T;			// o termo generico da serie
	int N;		// auxiliar no calculo do fatorial
	int I;		// contador do numero de termos
	int J;		// para definir o sinal
	int E;		// expoente de x
	float K;			// valor do cosseno usando a funcao COS
	float DIF;		// a diferenca entre o valor calculado e o fornecido pela funcao

	

	S = 1;		
	I = 0;		

	

	DEN = 1;
	NUM = 0;	
	E = 2;		
	J = 1;		

	

	cout <<   "informe    o valor de x: " <<endl;
	cin >> X ;
	
	K = cos ( X ); 

	while ( I <= 20 )
	{
		E = E + 2;		
		NUM = X^E;		

		

		DEN = 1;
		N = E;

		if ( N == 1 )
		{
			DEN = DEN * N;		
			N = N - 1;
		}
		
		T = NUM / DEN;	
		J = -1 * J;		
		S = S + J * T;		

		

		I = I + 1;
	}
	


	DIF = K - S;
	DIF = abs (DIF);
	
	cout <<  "O valor do co-seno calculado e: " <<S <<endl;
	cout <<  "O valor do co-seno dado pela formula e: " <<K <<endl;
	cout <<  "A diferenca e: " <<DIF <<endl;

}

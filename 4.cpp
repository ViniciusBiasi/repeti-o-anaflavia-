#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
		float PI;	// valor de pi
		float  DEN;	// numerador e denominador da serie
		float AUX;	// utilizado para descobrir a precisao
		int I;	// sinal dos termos
		int N;	// contador de termos
          

		PI = 4;
		DEN = 3;
		I = -1;
		N = 1;

		while (DEN > 0)
		{
			AUX = 4 / DEN;
			PI = PI + I*AUX;
			DEN = DEN + 2;
			I = -1*I;
			cout << "O valor calculado: " <<PI <<endl;
			//** valor absoluto => abs
			if (abs(PI-3.141592)<0.0001)
			{
			    break;
			}
			N = N + 1;
		}
		cout << "o valor do denominador e: " << DEN <<endl;
		cout << "a quantidade de termos e: "<<N <<endl;
}


#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
setlocale(LC_ALL, "");
	int A, B, menor, i, flag=0, resto;
	
	//** exemplo 20 e 21.... 
	
	cout << "Escreva um numero inteiro e positivo : "<<endl;
	cin >> A;
	
	cout << "Digite um segundo numero inteiro e positivo: "<<endl;
	cin >> B;
	

	if (A<B)
		menor = A;
	else
		menor = B;
		
	for(i=2;i<=menor;i++){
		if ((A%i==0) && (B%i==0)){
			flag=1;
			break;
		}
	}
	
	if (flag) 
		cout << "Não são primos entre si..." <<A <<B <<endl;
	else
		cout << "São primos entre si..." <<A <<B <<endl;  
		
		 resto = A%B;
		 
              while(resto!=0)
              {
                  A    = B;
                  B   = resto;
                  resto = A%B;         
              }
              cout << "MDC = " <<B <<endl;
             

			
	return 0;
}





#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
setlocale(LC_ALL, "");
  float idade, somaidade = 0, idademedia; 
  int contpes = 0;
  cout << "DIGITE 0 PARA SAIR DO PROGARAMA.... "<<endl;
   cout << "Digite uma idade: "<<endl;
	cin >>idade;
	
	while(idade != 0){
		contpes++; 
		somaidade = somaidade + idade; 
		cout << "DIGITE 0 PARA SAIR DO PROGARAMA.... "<<endl;
		cout << "Digite uma idade: "<<endl;
      	cin >>idade;
	}
	idademedia = somaidade / contpes;
	cout << "IDADE MEDIA = " <<idademedia <<endl;
	return 0;
}






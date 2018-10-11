#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
setlocale(LC_ALL, "");

 int tempo=0, aux=0, hora, minuto, segundo;
  float massa, massafinal;
  
  cout << "Digite a massa: "<<endl;
  cin >> massa;
	
	massafinal = massa;
	while(massafinal >= 0.5){
		massafinal = massafinal/2; 
		tempo = tempo + 50;
	}
	hora=tempo/3600; 
	aux=tempo%3600; 
	minuto=aux/60; 
	segundo=aux%60;
	
	cout << "MASSA INICIAL  =" <<massa<<endl<<  "MASSA FINAL  = "  <<massafinal<<endl<<   "TEMPO = " <<hora<< ":" <<minuto<< ":" <<segundo <<endl ; 
	return 0;
}

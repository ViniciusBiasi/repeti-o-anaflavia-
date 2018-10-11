#include <iostream>
using namespace std;
int main()
{

  
  float marco1, marco2, tempo, espaco;
   int i=1, velocidade;
    
    cout << "Digite o 1 marco: "<<endl;
    cin >> marco1;
    
    cout << "Digite o 2 marco: "<<endl;
    cin >> marco2;
 
	while (marco1 != marco2)
	  {
		cout << "MARCO 1 =" <<marco1<< "MARCO 2 = " <<marco2 <<endl;
		espaco = marco2 - marco1; 
		i++; 
		velocidade = i*10;
		 tempo = (float)espaco/velocidade;
		 
		while (tempo > 2 && i < 9){
			cout << "VELOCIDADE =" <<velocidade<<  "Km/h OCORREU O TEMPO DE" <<tempo<< "HORAS\n"<<endl;
			i++; velocidade = i*10;
			 tempo = (float)espaco/velocidade;
		}
		i=1;
		cout << " MARCOS 1 E 2 : " <<marco1<< marco2<< endl;
	}
	return 0;
}




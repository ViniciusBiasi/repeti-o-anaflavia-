#include <iostream>
using namespace std;
int main()
{


    int dia1, mes1, ano1, dia2, mes2, ano2, diaTotalAno;
    int diaMes;


cout << "Dia1 "<<endl;
cin >> dia1;

cout << "Mes 1..."<<endl;
cin >> mes1;

cout << "Ano1.... "<<endl;
cin >> ano1;

cout << "Dia2....."<<endl;
cin >> dia2;

cout << "Mes2..."<<endl;
cin >> mes2;

cout << "Ano2... "<<endl;
cin >> ano2;

    
    for(int i = ano1; i < ano2; i++){ 

       
        if(i % 4 == 0){
            diaTotalAno = +366;
        } else {
            diaTotalAno = +365;
        }
    }

    for(int i = ano1; i < ano2; i++){ 
        int diaMes =+30;  
    }

    cout << "Os dias entre " << ano1 << " e " << ano2 << " é: " << diaTotalAno << "\n";

    return 0;
}
	
	


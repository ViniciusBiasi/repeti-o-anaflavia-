#include <iostream>
#include <math.h>
using namespace std;
int main()
 { 
   int dia, mes, ano, A, B, C, D, E, dia_juliano, dia_da_semana; 
   char nome_dia [7] [10] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado", "Domingo"}; 
   char outra='S'; 
   
   do { 
      cout << "Informe uma data dando ENTER (dd/mm/aaaa): "<<endl; 
      cin >>  dia; 
	  cin >> mes;
	  cin >> ano; 
	 
      while ((dia < 1 || dia > 31) || (mes <1 || mes > 12) || (ano < 1583)) 
	  { 
         cout <<"Data inválida. Reinforme a data (dd/mm/aaaa): "<<endl; 
         cin >> dia;
         cin >>mes;
         cin >>ano; 
      } 
      if (mes < 3) 
	  { 
         mes += 12; 
         ano -= 1; 
      } 
      A = ano / 100; 
      B = A / 4; 
      C = 2 - A + B; 
      D = (int) (365.25 * (ano + 4716)); 
      E = (int) (30.6001 * (mes + 1)); 
      dia_juliano = D + E + dia + C - 1524; 
      dia_da_semana = dia_juliano % 7; 
     cout<<" Dia: " <<dia<<  " Mes:" <<mes<< " Ano:  " <<ano<< " Dia da semana:  " <<dia_da_semana<< " Nome do dia:  "<<nome_dia[dia_da_semana] <<endl; 
      cout << "Outra data? [S/N]: "; 
      cin >> outra; 
   } while ((outra == 's') || (outra == 'S')); 
   return 0; 
}

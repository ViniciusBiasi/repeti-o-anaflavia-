#include <iostream>
using namespace std;
int main()
{


int cont=0,n_turmas=0,quant=0,n_alunos=0,mat=0,alunos_A=0,prct_m5=0;
char chamada,turma;
float prct_A=0;

cout << "Digite o numero de turmas..."<<endl;
cin >> n_turmas;

for(cont=0; cont<n_turmas; cont++)
{
  cout << "Turma (A, B, OU C)"<<endl;
  cin >> turma;
  
   cout << "Numero de alunos... "<<endl;
   cin >> n_alunos;
   
   for(quant=0; quant<n_alunos; quant++)
   { 
      cout << "Matricula ..."<<endl;
	  cin >> mat;
      cout << "Chamada..."<<endl;
	  cin >> chamada;
      if(chamada =='A')
      {
      alunos_A++;
      }
   }

   prct_A = (float)(alunos_A*100)/n_alunos;

   if(prct_A>5)
   prct_m5++;
   cout << "TURMA" <<turma<< "PORCENTAGEM DE AUSENCIA =" <<prct_A <<endl;

}

cout << "NUMERO DE TURMA COM AUSENCIA SUPERIOR A 5 % = " <<prct_m5 <<endl;

return 0;

}
	
	



#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
setlocale(LC_ALL, "");

  int n, fant, fatual, fprox, contador;           
  
  cout << "Digite um numero : "<<endl;
  cin >> n;
  
  
  fant   = 0;
  fatual = 1;
  contador = 1;
  
  while (contador < n) {
    fprox  = fatual + fant;  
    fant   = fatual;
    fatual = fprox;
    contador = contador + 1;
  }
  cout << "Numero  de Finobacci =" <<n <<fatual <<endl;
  
  return 0;
}



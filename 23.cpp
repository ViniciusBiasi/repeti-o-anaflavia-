#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
setlocale(LC_ALL, "");

int x;
int n;
int sub;
int cont;
x=1;
cont=0;
sub=1; 
cout << "Informe o numero que voce deseja obter a raiz: " <<endl;
cin >> n;
while (n>0) 
{         
n=n-x;    
x=x+2;
cont=cont+1;    
}
if (n<0)
{
cout << "raiz não natural" <<endl;
}
else
{
cout << "raiz do numero: " <<cont <<endl;
}
}

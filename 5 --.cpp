#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	float soma,x,den,exp;
	cout<<"Insira o valor de x: "<<endl;
	cin>>x;
	den=1;
	exp=25;
	soma=pow (x,exp)/den;
	while (den!=25)
	{
		den++;
		exp--;
		soma=soma+pow (x,exp)/den;
	}
	cout<<"Valor: "<<soma<<endl;
}

#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	int n,i;
	cout<<"Insira um n�mero: "<<endl;
	cin>>n;
	cout<<"Divisores: "<<endl;
	i=0;
	while (i!=n)
	{
		i++;
		if (n%i==0){
			cout<<i<<endl;}
	}
}

#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	int n,i,soma;
	cout<<"Insira um n�mero: "<<endl;
	cin>>n;
	i=0;
	soma=0;
	while (i!=n-1)
	{
		i++;
		if (n%i==0){
			soma=soma+i;}
	}
	if (soma==n){
		cout<<"� perfeito."<<endl;}
		else {
			cout<<"N�o � perfeito."<<endl;}
}

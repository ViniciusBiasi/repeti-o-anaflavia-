#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	int n,i,mul;
	cout<<"Insira um número:"<<endl;
	cin>>n;
	for (i=0;i<=9;i++)
	{
		mul=n*i;
		cout<<endl;
		cout<<n<<"*"<<i<<"="<<mul<<endl;
	}
}

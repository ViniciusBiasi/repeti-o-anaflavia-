#include <iostream>
using namespace std;
int main ()
{
	float n,i,v;
	cout<<"Insira um número:"<<endl;
	cin>>n;
	cout<<endl;
	for (i=0;i<=10;i++)
	{
		v=n*i;
		cout<<n<<"*"<<i<<"="<<v<<endl;
	}
} 

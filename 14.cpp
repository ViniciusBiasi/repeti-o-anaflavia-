#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	int n,i;
	float r;
	cout<<"Leia um número:"<<endl;
	cin>>n;
	i=n;
	while (i!=1)
	{
		i--;
		n=n*i;
	}
	cout<<n<<endl;
}

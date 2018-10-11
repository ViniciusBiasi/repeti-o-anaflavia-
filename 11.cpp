#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	int n,i,r1;
	i=1000;
	while (i!=9999)
	{
		i++;
		r1=i/100+i%100;
		if (pow(r1,2)==i){
			cout<<i<<endl;}
	}
}
	

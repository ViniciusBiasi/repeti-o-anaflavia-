#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	int n,r,i;
	for (n=0;n<=100;n++)
	{
	i=0;
	while (i!=n)
	{
		i++;
		if (n%i==0){
			r++;}
	}
	if (r==2){
		cout<<n<<endl;}
	}	
}  


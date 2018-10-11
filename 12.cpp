#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{


setlocale(LC_ALL, "");

int num,a,b,c;

cout << "INTRODUZA UM NUMERO PARA SABER SE É OU NÃO É CAPICUAS: ";
cin >> num;
cout << endl << endl;

a=num;
c=0;
b=0;

while(a!=0)
{
b=a%10;
a=a/10;
c=c*10+b;
}

system("PAUSE");

if(c==num)
cout << endl << num << " É" << endl << endl;

else
cout << endl << num << " não é " << c << endl << endl;

return 0;
}
	
	
	
	


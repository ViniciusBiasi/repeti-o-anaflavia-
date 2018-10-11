#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	float x,y,z,s;
	x=37;
	y=38;
	z=1;
	s=(x*y)/z;
	while (z<=37)
	{
		x=x-1;
		y=y-1;
		z=z+1;
		s=s+(x*y)/z;
	}
	cout<<"O valor é: "<<s<<endl;
}

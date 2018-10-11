#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	float i,x,y;
	i=1;
	x=1;
	y=i/x;
	while (x<=50)
	{
		i=i+2;
		x++;
		y=y+(i/x);
	}
	cout<<"Resultado:"<<y<<endl;
}

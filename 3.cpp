#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	float x,y,s,t;
	int i;
	x=480;
	y=10;
	i=0;
	s=(x/y);
	while (i!=30)
	{
		i++;
		x=x-5;
		y=y+1;
		if (i%2==0){
			t=(x/y);}
			else{
				t=-(x/y);}
		s=s+t;
	}
	
	cout<<"O resultado é: "<<s<<endl;
}

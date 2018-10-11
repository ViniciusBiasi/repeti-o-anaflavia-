#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	

	float S;			
	int NUM;	
	int FAT;	
	float T;			
	int N;		
	int I;		
	

	S = 0;
	I = 0;



	NUM = 63;	
	FAT = 1;	
	N = 1;



	T = 1;

	while ( T <= 00000001 )
	{
		T = NUM / FAT;
		S = S + T;
		NUM = NUM - 2;
		FAT = FAT * N;
		N = N + 1;
		I = I + 1;
	}
	cout <<  "O valor do somatorio e: " <<S  <<endl;
	cout <<  "O numero de termos utilizados foi: " <<I <<endl;
}	
	
	
	


#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n,b,x,s,i,y,k;
	b=2;
	x=0;
	s=0;
	k=-1;
	cout<<"Insira um número na base 2: "<<endl;
	cin>>n;
	n=n*10;
	while (n!=0)
	{
		k++; 
		
		n=n/10;
		
		y=n%10;
		
		if (y==1){
			s=s+pow (b,k);}
			else {
				s=s+0;}
		
	}
	cout<<"resultado: "<<s<<endl;
}

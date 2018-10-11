#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n,s,y,x,st;
	cout<<"número:"<<endl;
	cin>>n;
	y=0;
	st=0;
	while (n!=0)
	{
		x=n%10;
		s=x*pow (16,y);
		y++;
		st=st+s;
		n=n/10;
	}
	cout<<"resutado: "<<st<<endl;
}

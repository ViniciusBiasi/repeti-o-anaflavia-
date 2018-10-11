#include <iostream>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	float s,f,st,tf,i,x,maior;
	cout<<"Digite -1 para parar."<<endl;
	cout<<"salário:"<<endl;
	cin>>s;
	st=0;
	tf=0;
	i=0;
	x=0;
	maior=0;
	while (s!=-1)
	{
		cout<<"filhos:"<<endl;
		cin>>f;
		
		st=st+s;
		i++;
		
		if (s>maior){
			maior=s;}
		
		tf=tf+f;
		
		if (s==937){
			x++;}
			
		cout<<"salário:"<<endl;
		cin>>s;
	}
	cout<<"média de salário: "<<st/i<<endl;
	cout<<"média de filhos: "<<tf/i<<endl;
	cout<<"maior salário "<<maior<<endl;
	if (x==0){
		cout<<"percentual com salário mínimo: 0%"<<endl;}
		else {
			cout<<"percentual com salário mínimo: "<<(x/i)*100<<"%"<<endl;}
}

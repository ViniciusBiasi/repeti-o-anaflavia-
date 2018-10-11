#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	int ndm,ndm1,ndm2,ndm3;
	float lt,l,pdc,pdv,i,vtdc,u,vtdv;
	string n;
	lt=0;
	ndm1=0;
	ndm2=0;
	ndm3=0;
	vtdc=0;
	vtdv=0;
	cout<<"Digite o múmero de mercadorias que serão lidas:"<<endl;
	cin>>ndm;
	for (i=0;i<ndm;i++)
	{
		cout<<"Digite o nome da mercadoria:"<<endl;
		cin>>n;
		cout<<"Digite o preço de compra:"<<endl;
		cin>>pdc;
		cout<<"Digite o preço de venda:"<<endl;
		cin>>pdv;
		l=pdv-pdc;
					vtdc=vtdc+pdc;
					vtdv=vtdv+pdv;
					lt=vtdv-vtdc;
					if (l<pdc*1.1){
						ndm1++;}
						if (l<=pdc*1.2 && l>pdc*1.1){
							ndm2++;}
							if (l<=pdc*1.3 && l>pdc*1.2){
							ndm3++;}
					
	}
	cout<<"O valor total das compras foi de: "<<vtdc<<endl;
	cout<<"O valor de venda foi de: "<<vtdv<<endl;
	cout<<"O lucro foi de: "<<lt<<endl;
	cout<<"O número de mercadorias que proporcionam lucro < 10% são: "<<ndm1<<endl;
	cout<<"O número de mercadorias que proporcionam 10%<lucro<20% são: "<<ndm2<<endl;
	cout<<"O número de mercadorias que proporcionam lucro > 20% são: "<<ndm3<<endl;
}

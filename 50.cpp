#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	float total,sf,maior;
	int n,ndp,ntdp,ndh,ndm,nm,ndha,ndhb,ndhc,ndma,ndmb,ndmc,ppha,pphb,pphc,ppma,ppmb,ppmc;
	char s;
	cout<<"Insira o n�mero do oper�rio: "<<endl;
	cin>>n;
	total=0;
	ntdp=0;
	maior=0;
	ndha=0;
	ndhb=0;
	ndhc=0;
	ndma=0;
	ndmb=0;
	ndmc=0;
	ppha=0;
	pphb=0;
	pphc=0;
	ppma=0;
	ppmb=0;
	ppmc=0;
	while (n!=0)
	{
		cout<<"Insira o n�mero de pe�as fabricadas por m�s: "<<endl;
		cin>>ndp;
		cout<<"Insira o sexo do funcion�rio: (m ou f)"<<endl;
		cin>>s;
		
		if (ndp<=30){
			sf=915;}
			else if (ndp>31 && ndp<=35){
				sf=915*1.03;}
				else if (ndp>35){
					sf=sf*1.05;}
	
		total=total+sf;
		
		ntdp=ntdp+ndp;
		
		if (s=='m' && ndp<=30){
			ndha++;
			ppha=ppha+ndp;}               
			else if (s=='m' && ndp>31 && ndp<=35){
					ndhb++;
					pphb=pphb+ndp;}
					else if (s=='m' && ndp>35){
							ndhc++;
							pphc=pphc+ndp;}
							else if (s=='f' && ndp<=30){
									ndma++;
									ppma=ppma+ndp;}
									else if (s=='f' && ndp>31 && ndp<=35){
										ndmb++;
										ppmb=ppmb+ndp;}
											else if (s=='f' && ndp>35){
											ndmc++;
											ppmc=ppmc+ndp;}
								        
				
		if (sf>maior){
			nm=n;}
			
		cout<<"O funcion�rio "<<n<<" tem sal�rio de: R$"<<sf<<endl;
		cout<<"Insira o n�mero do oper�rio: "<<endl;
		cin>>n;
	}
	
	cout<<"Total da folha mensal de pagamento da f�brica: "<<total<<endl;
	
	cout<<"N�mero total de pe�as fabricadas por m�s: "<<ntdp<<endl;
	
	if (ppha>0){
	cout<<"M�dia de pe�as fabricadas pelos homens em a: "<<ppha/ndha<<endl;}
	else {
	cout<<"M�dia de pe�as fabricadas pelos homens em a: 0"<<endl;}
	
	
	if (pphb>0){
	cout<<"M�dia de pe�as fabricadas pelos homens em b: "<<pphb/ndhb<<endl;}
	else {
	cout<<"M�dia de pe�as fabricadas pelos homens em b: 0"<<endl;}
	
	
	if (pphc>0){
	cout<<"M�dia de pe�as fabricadas pelos homens em c: "<<pphc/ndhc<<endl;}
	else {
		cout<<"M�dia de pe�as fabricadas pelos homens em c: 0"<<endl;}
		
		
	if (ppma>0){
	cout<<"M�dia de pe�as fabricadas pelas mulheres em a: "<<ppma/ndma<<endl;}
	else {
	cout<<"M�dia de pe�as fabricadas pelas mulheres em a: 0"<<endl;}
	
	
	if (ppmb>0){
	cout<<"M�dia de pe�as fabricadas pelas mulheres em b: "<<ppmb/ndmb<<endl;}
	else {
	cout<<"M�dia de pe�as fabricadas pelas mulheres em b: 0"<<endl;}
	
	
	if (ppmc>0){
	cout<<"M�dia de pe�as fabricadas pelas mulheres em c: "<<ppmc/ndmc<<endl;}
	else {
	cout<<"M�dia de pe�as fabricadas pelas mulheres em c: 0"<<endl;}

	cout<<"O oper�rio(a) de maior sal�rio �: "<<nm<<endl;
}

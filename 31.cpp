#include <math.h>
#include <iostream>
using namespace std;
int main()

{
	int IDADE , INDIVIDUOS;
		
							
	int MAIORIDADE ;
	float PORCENTAGEM ;		
								
	int TOTALINDIVIDUOS ;
	string CABELOS ;	
	string OLHOS ;		
	string SEXO ;		

	

	MAIORIDADE = 0;
	TOTALINDIVIDUOS = 0;
	INDIVIDUOS = 0;

	while ( IDADE != -1 )
	{
		cout <<  "informe o sexo: ";
		cin >>  SEXO ;
		cout << "informe a cor dos olhos: ";
		cin >> OLHOS ;
		cout << "informe a cor dos cabelos: ";
		cin >> CABELOS ;
		cout << "informe a  idade:" ;
		cin >> IDADE ;



		if ( IDADE != -1 )
		{
			

			if ( IDADE > MAIORIDADE )
			{
				MAIORIDADE = IDADE;
			}
			
			

			TOTALINDIVIDUOS = TOTALINDIVIDUOS + 1;

			

			if ( IDADE >= 18 && IDADE <= 35 )
			{
				if ( SEXO == "F" && OLHOS == "VERDES" )
				{
					if ( CABELOS == "LOUROS" )
					{
						INDIVIDUOS = INDIVIDUOS + 1;
					}
				}
			}
		}
	}
	PORCENTAGEM = INDIVIDUOS * 100 / TOTALINDIVIDUOS;
	cout << "A maior idade e " <<MAIORIDADE ;
	cout <<  "Porcentagem: " <<PORCENTAGEM ;
}

#include <iostream>
using namespace std;
int main()
{
 
 float MINIMO;
	int TRANS;
	float TAXA;	
	int CONTA;	
	float VALOR;	
	char TIPO;
	float SALDO;	



	cout << "informe o valor do balanco minimo diario: "<<endl;
	cin >>   MINIMO;
	cout << "informe a quantidade de transacoes: >> Digite 0 << " <<endl;
	cin >>  TRANS ;
	cout <<  "informe o valor da taxa de servico %: "<<endl;
	cin >>  TAXA ;

	while ( TRANS == 0 )
	{
		
		cout << "informe o    numero da conta: "<<endl;
		 cin >> CONTA;
		cout << "informe o valor da transacao: " <<endl;
		cin >> VALOR;
		cout <<  "informe o tipo da transacao (d/r): "<<endl;
		cin >>  TIPO ;

		

		if ( TIPO == 'd' || TIPO == 'D' )
		{
			SALDO = SALDO + VALOR;
		}
		else 
		{
			if ( TIPO == 'r' || TIPO == 'R' )
			{
				SALDO = SALDO - VALOR;
			}
		}

		

		if ( SALDO < MINIMO )
		{
			SALDO = SALDO - SALDO * TAXA / 100;

			cout <<  "Conta " <<CONTA<< " => NAO HA FUNDOS" <<endl;
		}
		else 
		{
			cout << "Conta " <<CONTA<< " => R$ " <<SALDO <<endl;
		}

		TRANS = TRANS - 1;
	}
}


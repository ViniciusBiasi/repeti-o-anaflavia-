#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
setlocale(LC_ALL, "");

float globo=0, sbt=0, record=0, bandeirantes=0;
float asg, ass, asb, asr, qnt_pessoas=0;
int opcao;

while(opcao != 5)
{
cout << " PESQUISA DE AUDIENCIA!\n\n";
cout <<"ESCOLHA A EMISSORA PARA INICIAR A PESQUISA\n\n";
cout << "1. GLOBO | 2. SBT | 3. RECORD | 4. BANDERANTES | 5. FIM";
cout <<"\n\nOPCAO -> ";
cin >> opcao;
system("cls"); 
if(opcao != 0 && (opcao == 1 || opcao == 2|| opcao == 3|| opcao == 4))
{
cout <<"\nINFORME QUANTAS PESSOAS estão ASSISTINDO: ";
cin >> qnt_pessoas;
}
switch(opcao){
case 1:
system("cls");
globo++;
cout <<"REGISTRO DE AUDIENCIA - REDE GLOBO\n\n";
globo = qnt_pessoas;
system("cls");
break;
case 2:
system("cls");
sbt++;
cout <<"REGISTRO DE AUDIENCIA - REDE SBT\n\n";
sbt = qnt_pessoas;
system("cls");
break;
case 3:
system("cls");
record++;
cout <<"REGISTRO DE AUDIENCIA - REDE RECORD\n\n";
record = qnt_pessoas;
system("cls");
break;
case 4:
system("cls");
bandeirantes++;
cout <<"REGISTRO DE AUDIENCIA - REDE BANDEIRANTES\n\n";
bandeirantes = qnt_pessoas;
system("cls");
break;
}
}
qnt_pessoas = globo + sbt + record + bandeirantes;
cout <<"TOTAL DE RESIDENCIAS PESQUISADAS: " <<qnt_pessoas;
cout <<"\n\n\nA GLOBO ATINGIU: " <<(globo/qnt_pessoas)*100<< " NA PESQUISA DA AUDIENCIA!\n\n";
cout <<"\nO SBT ATINGIU:"  <<(sbt/qnt_pessoas)*100<<  "NA PESQUISA DA AUDIENCIA!\n\n\n";
cout <<"\nA RECORD ATINGIU: " <<(record/qnt_pessoas)*100<< " NA PESQUISA DA AUDIENCIA!\n\n\n";
cout <<"\nA BANDEIRANTES ATINGIU: " <<(bandeirantes/qnt_pessoas)*100<< " NA PESQUISA DA AUDIENCIA!\n\n\n";
system("pause");
return 0;
}

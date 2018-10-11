#include <iostream>
using namespace std;
int main ( )
{
float nota, nota1, m;
cout << "Digite uma nota:"<<endl;
cin >> nota;

cout << "Digite a segunda nota: "<<endl;
cin >> nota1;
   
m = ((nota*4)+(nota1*6))/10;

while (m != 0)
{

cout << "Erro! A nota deve ser entre 0 e 10"<<endl;
cout << "Digite novamente a 2 notas dando (ENTER PARA FAZER CADA NOTA): "<<endl;
cin  >> nota; 
cin >> nota1;

}
if (nota >= 7 && nota1 >=7) 
{

cout << "Aluno aprovado!";

 
 if (nota <= 7 && nota1 <= 7)
cout << "Aluno reprovado!";
}


}

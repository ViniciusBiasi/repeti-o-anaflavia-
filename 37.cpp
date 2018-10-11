#include <iostream>
using namespace std;
int main()
{

   
    int num,num1,num2=0;
   
    cout << "Digite um conjunto de numero e 0 para encerrar \n";
    cout << "Digite um valor inteiro e positivo... "<<endl;
	 cin >> num;
   
    while (num!=0){
          
		  cout << "Digite um valor inteiro e positivo... "<<endl;
		  cin >> num;
         
          if (num<0){          
             cout << "Valor negativo, digite novamente \n"<<endl;
          }
            else if (num)
                 num1=num;
             }
               if (num>num2){
                  num2=num;
              }     
    
    
    cout << "o maior valor eh:  " <<num2<<endl;
    cout << "o menor valor eh:  " <<num1<<endl;
   
}
                                  

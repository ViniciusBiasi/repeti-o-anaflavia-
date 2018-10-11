#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main ()
{
setlocale(LC_ALL, "");

int num, count=1;
    
   cout << "digite um numero (para o prog. rodar...):"<<endl;
    cin >> num;
    cout << "impares \t | pares\n ";
    while(count<=num) 
    {
        if(count%2==1)
        cout << "   \t" <<count;
        else
        cout << "  \t   \n" <<count;
        count++;
    }
}



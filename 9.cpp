#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

        int count = 1;
        int n;

cout << "Informe um numero: "<<endl;
cin >> n;

        while(count <= n)
        {
            if(count%2 == 1)
                cout <<count <<endl;

            count++;
        }
}



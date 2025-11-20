/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
int positivos = 0;
    int negativos = 0;
    int cero = 0;
    cout << "Este programa ve cuantos numeros positivos, negativos o de valor cero hay" << endl;
    for(int c = 0; c < 9; c++)
    {
        int la[c];
        cout << "Ingrese el numero: ";
		cin >> la[c];
		if(la[c] < 0)
		{
			negativos = negativos + 1;
		}
		if(la[c] == 0)
		{
			cero = cero + 1;
		}
		if(la[c] > 0)
		{
			positivos = positivos + 1;
		}
    }
    cout << "La cantidad de numeros positivos es de: " << positivos << endl;
    cout << "La cantidad de numeros negativos es de: " << negativos << endl;
    cout << "La cantidad de numeros de valor cero es de: " << cero << endl;
    return 0;
}
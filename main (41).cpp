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
int vector[5];
    int vectorr[5];
    int vector_final[10];
    int posicion = 0;
    cout << "Este programa intercala valores de los vectores o algo asi" << endl;
    cout << "Ingresa los primeros 5 numeros del primer vector:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> vector[i];
    }
    cout << "Ahora ingresa los primeros 5 numeros para el segundo vector: " << endl;
    for (int j = 0; j < 5; j++) {
        cin >> vectorr[j];
    }
    for (int k = 0; k < 10; k++)
    {
        if(k % 2 == 0)
        {
            vector_final[k] = vector[posicion];
        }
        if(k % 2 != 0)
        {
            vector_final[k] = vectorr[posicion];
            posicion++;
        }
    }
    cout << "Los datos finales son: " << endl;
    for (int c = 0; c < 10; c++) 
    {
        cout << vector_final[c] << " ";
    }
    return 0;
}
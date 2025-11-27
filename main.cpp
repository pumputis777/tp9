/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "ingrese la cantidad de numeros: ";
    cin >> n;
    int vector[n];
    
    for(int i = 0; i < n; i++)
    {
        cout<< "ingrese el numero: ";
        cin >> vector[i];
    }
    for (int i=0; i <n; i++)
    {
        for(int a=0; a<n; a++)
        {
            if (vector[a] > vector[a+1])
            {
                int temp = vector[a];
                vector[a] = vector[a+1];
                vector[a+1] = temp;
            }
        }
    }
cout<< "\nvector ordenado: ";
for(int i=0; i <n; i++)
{
    cout << vector[i] << " ";
}
    return 0;
}
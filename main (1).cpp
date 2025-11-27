/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
double array[6];

for (int i=0; i <6; i++)
{
    cout <<"ingrese el numero: ";
    cin >> array[i];
}
double suma= 0;

for (int i=0; i<6; i++)
{
    if(i % 2 ==0)
    {
        suma += array[i];
    }
}
cout << "\nla suma de los elementos en posiciones pares es: "<<suma;

    return 0;
}
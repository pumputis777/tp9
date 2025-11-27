/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
int vector[10];

for(int i=0; i <10; i++)
{
    cout << "ingrese el numero: ";
    cin >> vector[i];
}

bool contados[10] = {false};

cout << "\nfrecuencia de cada numero:\n";

for(int i=0; i<10; i++)
{
    if(!contados[i])
    {
        int frecuencia = 1;
        for(int a=i+1; a <10; a++)
        {
            if(vector[i] == vector[a])
            {
                frecuencia++;
                contados[a] = true;
            }
        }
        cout <<"numero " <<vector[i] <<": " << frecuencia << " veces"<<endl;
        
    }
}
    return 0;
}
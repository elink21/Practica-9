/*Programa para calcular la serie par desde 0 hasta el numero
que introduzca el usuario, ahora con el uso de for
Elias Edgardo Segundo Antonio ICO 21*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int suma=0,nTerminos=0,n,i=0;
    char otra='Y';

    while(otra=='Y')
    {
        cout<<"Inserte el numero para calcular la serie: ";
        cin>>n;
        if(n>0)
        {
           for(i;i<=n;i+=2)
           {
               cout<<i<<"\n";
               suma+=i;
               nTerminos++;
           }
           cout<<"La suma es "<<suma<<"\n";
           cout<<"El promedio es "<<suma/nTerminos<<"\n";
           cout<<"Desea realizar otra consulta? (Y/N): ";
           cin>>otra;
           suma=0;
           nTerminos=0;
           i=0;
        }
        else cout<<"\nError, no puede ser menor a 0\n";
    }
}

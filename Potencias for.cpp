/*Programa de calculo de potencias con el uso de
estructura repetitiva for
Elias Edgardo Segundo Antonio ICO 21*/
/*Programa para calcular el valor de un numero elevado a
un exponente
Elias Edgardo Segundo Antonio ICO 21*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float exponente,base,i=0,resultado=1;
    char otra='Y';
    bool error=false;

    while(otra=='Y')
    {
        error=false;

        cout<<"Ingrese un exponente: ";
        cin>>exponente;
        if(exponente!=0){
            cout<<"Ahora inserte la base: ";
            cin>>base;
                for(i;i<abs(exponente);i++)
                {
                    resultado*=base;
                }

                if(exponente<0)resultado=1/resultado;
                cout<<base<<"^"<<exponente<<"="<<resultado<<"\n";
                i=0;
                resultado=1;
        } else error=true;
        if(!error)
        {
            cout<<"Desea realizar otra prueba?(Y/N): ";
            cin>>otra;
        }
        else cout<<"Hubo valores erroneos, intente de nuevo\n\n";
    }
}

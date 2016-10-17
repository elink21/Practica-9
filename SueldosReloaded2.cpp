/*Programa para determinar los sueldos de acuerdo al
puesto con enum, uso de error con la bandera booleana

Elias Segundo Antonio
ICO21
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int opcion;
    char otra='Y';
    bool error=false;
    enum puestos
    {
        Obrero,Administrativo,Jefe,Gerente
    };
    while(otra=='Y')
    {
    error=false;
    cout<<"Inserte su puesto para conocer su sueldo\n";
    cout<<"1-Obrero\n";
    cout<<"2-Administrativo\n";
    cout<<"3-Jefe\n";
    cout<<"4-Gerente\n";
    cout<<"Introduzca: ";
    cin>>opcion;
    switch(--opcion)
    {
    case Obrero:
        cout<<"El sueldo es: $750";
        break;
    case Administrativo:
        cout<<"El sueldo es: $1200";
        break;
    case Jefe:
        cout<<"El sueldo es: $2500";
        break;
    case Gerente:
        cout<<"El sueldo es: $5000";
        break;
    default:
        error=true;
    }
    if(!error)
    {
        cout<<"\nDesea realizar otra consulta?(Y/N): ";
        cin>>otra;
    }
    else {
        cout<<"\n\nNo se ingreso un valor valido, reinicio del menu principal...\n\n";
    }
    }

}

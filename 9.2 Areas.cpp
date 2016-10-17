/*Programa para calcular con un menu el area de
3 figuras distintas, ciclico y con deteccion de errores
Elias Edgardo Segundo Antonio ICO21
*/

#include <bits/stdc++.h>
using namespace std;

//Declaramos estructuras para mantener cada figura en orden
struct triangle{
    float height;
    float width;
};

struct circle{
    float radio;
};

struct rectangle{
    float width;
    float height;
};


int main()
{
    //Instanciamos las figuras
    triangle triangle1;
    circle circle1;
    rectangle rectangle1;
    const float PI=3.1416;//Constante PI
    bool error=false;//La variable error se reutiliza para el error con valores negativos y con la opcion
    char anotherTest='Y';
    int option;
    enum shapes{circles,rectangles,triangles};
    while(anotherTest=='Y')
    {
        error=false;
        cout<<"Inserte el numero de la figura de la que desea el area: \n";
        cout<<"1-Circulo\n2-Rectangulo\n3-Triangulo\nInserte: ";
        cin>>option;
        switch(--option)
        {

        case circles:
            cout<<"Inserte el radio del circulo: ";
            cin>>circle1.radio;
            if(circle1.radio>0)
            {
                cout<<"El area es: "<<PI*pow(circle1.radio,2)<<"\n\n";//Area circulo
            }
            else error=true;
            break;
        case rectangles:
            cout<<"Inserte la magnitud de la base: ";
            cin>>rectangle1.width;
            if(rectangle1.width>0){
                cout<<"Inserte la magnitud de la altura: ";
                cin>>rectangle1.height;
                if(rectangle1.height>0)
                {
                    cout<<"El area es: "<<rectangle1.height*rectangle1.width<<"\n\n";//Area rectangulo
                }
                else error =true;
            }
            else error=true;
            break;
        case triangles:
            cout<<"Inserte la magnitud de la base: ";
            cin>>triangle1.width;
            if(triangle1.width>0){
                cout<<"Inserte la magnitud de la altura: ";
                cin>>triangle1.height;
                if(triangle1.height>0)
                {
                    cout<<"El area es: "<<(triangle1.height*triangle1.width)/2<<"\n\n";//Area triangulo
                }
                else error =true;
            }
            else error=true;
            break;
        default: error=true;
        }
        if(!error)
        {
            cout<<"Desea realizar otra prueba?(Y/N): ";
            cin>>anotherTest;
        }
        else cout<<"\nError, no se ingresaron opciones validas, intente de nuevo\n\n";
    }

    return 0;
}

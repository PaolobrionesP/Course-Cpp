//DEFINICION: Método que se ejecute inicialmente y en forma automática


/* Problema 1:
===========================================================================================================
Se desea guardar los sueldos de 5 operarios en un vector. Realizar la carga del vector en el constructor.*/

#include<iostream>

using namespace std;

class Operarios {
private:
    float sueldos[5];
public:
    Operarios();
    void imprimir();
};

Operarios::Operarios()
{
    cout <<"Carga de sueldos." <<"\n";
    for(int f=0;f < 5;f++)
    {
        cout <<"Ingrese el sueldo:";
        cin >>sueldos[f];
    }
}

void Operarios::imprimir()
{
    for(int f = 0; f < 5; f++)
    {
        cout <<sueldos[f] <<"\n";;
    }
    cin.get();
    cin.get();
}

int main()
{
    Operarios op;
    op.imprimir();
    return 0;
}


/* Problema 2:
===========================================================================================================
Plantear una clase llamada Moneda. Al constructor llega como parámetro el valor de la moneda (1,5,50 o 100) Definir luego dos objetos de esta clase con valores de moneda 5 y 50.*/

#include<iostream>

using namespace std;

class Moneda {
private:
    int valor;
public:
    Moneda(int v);
    void imprimir();
};

Moneda::Moneda(int v)
{
    valor=v;
}

void Moneda::imprimir()
{
    cout <<"Valor de la moneda:" <<valor <<"\n";
}

int main()
{
    Moneda moneda1(5);
    Moneda moneda2(50);
    moneda1.imprimir();
    moneda2.imprimir();
    return 0;
}
// DEFINICION: Un vector es una estructura de datos que permite almacenar un CONJUNTO de datos del MISMO tipo.

/* Problema 1
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Se desea guardar los sueldos de 5 operarios.
Según lo conocido deberíamos definir 5 variables si queremos tener en un cierto momento los 5 sueldos almacenados en memoria.
Empleando un vector solo se requiere definir un único nombre y accedemos a cada elemento por medio del subíndice. */

/* #include <iostream>

using namespace std;

class PruebaVector1
{
private:
    int sueldos[5];

public:
    void cargar();
    void imprimir();
};

void PruebaVector1::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese valor del sueldo:";
        cin >> sueldos[f];
    }
}

void PruebaVector1::imprimir()
{
    cout << "Listado de sueldos.";
    cout << "\n";
    for (int f = 0; f < 5; f++)
    {
        cout << sueldos[f];
        cout << "\n";
    }
    cin.get();
    cin.get();
}

int main()
{
    PruebaVector1 pv1;
    pv1.cargar();
    pv1.imprimir();
    return 0;
} */

/* Problema 2
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y cuántas más bajas. */

/* #include <iostream>

using namespace std;

class PruebaVector2
{
private:
    float alturas[5];
    float promedio;

public:
    void cargar();
    void calcularPromedio();
    void mayoresMenores();
};

void PruebaVector2::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese la altura de la persona:";
        cin >> alturas[f];
    }
}

void PruebaVector2::calcularPromedio()
{
    float suma = 0;

    for (int f = 0; f < 5; f++)
    {
        suma = suma + alturas[f];
    }
    promedio = suma / 5;
    cout << "Promedio de alturas:";
    cout << promedio;
    cout << "\n";
}

void PruebaVector2::mayoresMenores()
{
    int may, men;
    may = 0;
    men = 0;
    for (int f = 0; f < 5; f++)
    {
        if (alturas[f] > promedio)
        {
            may++;
        }
        else
        {
            if (alturas[f] < promedio)
            {
                men++;
            }
        }
    }
    cout << "Cantidad de personas mayores al promedio:";
    cout << may;
    cout << "\n";
    cout << "Cantidad de personas menores al promedio:";
    cout << men;
    cin.get();
    cin.get();
}

int main()
{
    PruebaVector2 pv2;
    pv2.cargar();
    pv2.calcularPromedio();
    pv2.mayoresMenores();
    return 0;
}
 */

/*Problema 3
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Desarrollar un programa que permita cargar 5 nombres de personas y sus edades respectivas. Luego de realizar la carga por teclado de todos los datos imprimir los nombres de las personas mayores de edad (mayores o iguales a 18 años)*/

#include<iostream>

using namespace std;

class PersonasEdades {
private:
    char nombres[5][40];    // Esto es para un array de strings
    int edades[5];
public:
    void cargar();
    void mayoresEdad();
};

void PersonasEdades::cargar()
{
    for(int f=0;f < 5;f++) 
    {
        cout <<"Ingrese nombre:";
        cin.getline(nombres[f], 40);
        cout <<"Ingrese edad:";
        cin >>edades[f];
        cin.get();
    }
}

void PersonasEdades::mayoresEdad()
{
    cout <<"Personas mayores de edad.";
    cout <<"\n";
    for(int f=0;f < 5;f++) 
    {
        if (edades[f] >= 18) 
        {
            cout <<nombres[f];
            cout <<"\n";
        }
    }
    cin.get();
}

int main()
{
    PersonasEdades pe;
    pe.cargar();
    pe.mayoresEdad();
    return 0;
}
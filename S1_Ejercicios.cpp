/* Problemas Propuestos
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
1. Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
    El valor acumulado de todos los elementos del vector.
    El valor acumulado de los elementos del vector que sean mayores a 36.
    Cantidad de valores mayores a 50.
2. Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. Sumar componente a componente.
3. Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
Realizar un programa que muestre el curso que obtuvo el mayor promedio general.
4. Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor.
5. Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios. Definir dos vectores paralelos. Mostrar cuantos productos tienen un precio mayor al primer producto ingresado.*/

/* RETO PROPUESTO
/////////////////////////////////////////
En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en dos vectores paralelos)
b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.*/


// 1. ................
/* #include <iostream>

class vector1{
    private:
        int vec[8];
    public:
        void cargar();
        void acumulado();   // El valor acumulado de todos los elementos del vector.
        void acumMay36();   // El valor acumulado de los elementos del vector que sean mayores a 36.
        void mayores50();   // Cantidad de valores mayores a 50
};

void vector1::cargar(){
    for (int i = 0; i < 8; i++)
    {
        std::cout << "Ingrese el valor " << i+1 << " : ";
        std::cin >> vec[i];
    }
}

void vector1::acumulado(){
    int sum=0;
    for (int i = 0; i < 8; i++){
        sum = sum + vec[i];
    }
    std::cout << "El valor acumulado es: " << sum << std::endl;
}

void vector1::acumMay36(){
    int acum=0;
    for (int i = 0; i < 8; i++){
        if(vec[i] > 36){
            acum = acum + vec[i];
        }
    }
    std::cout << "El valor acumulado de los valores mayores a 36 es: " << acum << std::endl;
}

void vector1::mayores50(){
    int cant=0;
    for (int i = 0; i < 8; i++){
        if(vec[i] > 50){
            cant++;
        }
    }
    std::cout << "La cantidad de valores mayores a 50 es: " << cant << std::endl;
}

int main()
{
    vector1 vectorprueba;
    vectorprueba.cargar();
    vectorprueba.acumulado();
    vectorprueba.acumMay36();
    vectorprueba.mayores50();
    return 0;
}  */

// 2. ................
/* #include <iostream>

class vec2 {
    private:
        int vector1[4];
        int vector2[4];
        int vectorSuma[4];

    public:
        void carga();
        void suma();
};

void vec2::carga() {
    std::cout << std::endl;
    std::cout << "  Carga del primer vector " << std::endl;
    std::cout << "............................" << std::endl;
    for (int i = 0; i < 4; i++){
        std::cout << "Ingrese elemento: ";
        std::cin >> vector1[i];
    }
    std::cout << std::endl << std::endl;
    std::cout << "  Carga del segundo vector " << std::endl;
    std::cout << "............................." << std::endl;
    for (int i = 0; i < 4; i++){
        std::cout << "Ingrese elemento: ";
        std::cin >> vector2[i];
    }
}
void vec2::suma(){
    for (int i = 0; i < 4; i++){
        vectorSuma[i] = vector1[i] + vector2[i];
    }

    std::cout << "\n Los valores del vector 3 son: ";
    for (int i = 0; i < 4; i++){
        std::cout << "[ " << vectorSuma[i] << " ] ";
    }
}

int main(){
    vec2 vectorprueba;
    vectorprueba.carga();
    vectorprueba.suma();
    return 0;
} */

// 3. ................
/* #include <iostream>
 */

// 4. ................
/* #include <iostream>

class vec4{
    private:
        int vec[10];
    public:
        void carga();
        void verificar();
};

void vec4::carga(){
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Ingrese elemento: ";
        std::cin >> vec[i];
    }
}

void vec4::verificar(){
    int var = 0;
    for (int i = 0; i < 10; i++){
        if (vec[i] > vec[i+1])
        {
            var++;
            break;
        }
    }

    if (var > 0)
    {
        std::cout << "No está ordenado";
    }
    else
    {
        std::cout << "Está ordenado";
    }
}

int main(){
    vec4 vectorprueba;
    vectorprueba.carga();
    vectorprueba.verificar();
    return 0;
} */

// 5. ................
#include <iostream>

class newclass
{
private:
    char producto[5][15];
    float precio[5];

public:
    newclass();
    void PrecioMayor();
};

newclass::newclass()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Ingrese el nombre del producto: ";
        std::cin.getline(producto[i], 15);
        std::cout << "Ingrese el precio: ";
        std::cin >> precio[i];
        std::cin.get(); // Para limpiar el buffer de entrada, en este caso se guarda el salto de linea ademas del dato precio
    }
}

void newclass::PrecioMayor()
{
    short cant = 0;
    for (int i = 0; i < 5; i++)
    {
        if (precio[i] > precio[0])
        {
            cant++;
        }
    }
    std::cout << "Cantidad de productos con un precio mayor al primero: ";
    std::cout << cant;
    std::cin.get();
}

int main()
{
    newclass inventario;
    inventario.PrecioMayor();
    return 0;
}
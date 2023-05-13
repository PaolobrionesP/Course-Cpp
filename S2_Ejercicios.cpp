/* Problemas propuestos
=================================================
1. Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. En el constructor cargar los atributos y luego en otro método imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)
2. Implementar la clase Operaciones. Al constructor llegan dos enteros que deben utilizarse en los métodos para calcular su suma, resta, multiplicación y división. imprimir dichos resultados. */

// 1. ................
#include <iostream>

class empleado
{
private:
    char name[50];
    float sueldo;
public:
    empleado();
    void imprimir();
    ~empleado();
};

empleado::empleado()
{
    std::cout << "Ingrese el nombre del empleado: ";
    std::cin.getline(name,50);
    std::cout << "Ingrese sueldo: ";
    std::cin >> sueldo;
    std::cin.get();
}

void empleado::imprimir(){
    std::cout << "EMPLEADO " << std::endl;
    std::cout << "=========== " << std::endl;
    std::cout << "NOMBRE: " << name << std::endl;
    std::cout << "SUELDO: S/ " << sueldo << std::endl;
}

empleado::~empleado() 
{
    if (sueldo > 3000)
    {
        std::cout << "PAGA IMPUESTO! " << std::endl;
    }
    else
    {
        std::cout << "NO PAGA IMPUESTO! " << std::endl;
    }
    
}

int main(){
    empleado empleado1;
    empleado1.imprimir();
    return 0;
}

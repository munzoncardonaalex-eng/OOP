#include <iostream>
#include <string>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    void mostrar() {
        cout << "Nombre = " << nombre << "\n";
        cout << "Edad = " << edad << "\n" ;
    }
};

int main() {
    Persona p1;
    Persona p2;

    p1.nombre = "Alex";
    p1.edad = 18;

    p2.nombre = "Jhonner";
    p2.edad = 18;

    cout << "Objeto 1: \n";
    p1.mostrar();

    cout << "\nObjeto 2: \n";
    p2.mostrar();

    return 0;
}   
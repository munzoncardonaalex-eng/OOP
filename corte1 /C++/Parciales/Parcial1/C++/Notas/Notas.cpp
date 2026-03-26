#include <iostream>
#include <string>
#include <limits> // Necesaria para limpiar el buffer de forma segura

using namespace std;

class Notas {
private:
    string nombre;
    int edad;
    string carrera;
    string codigo;
    double notas[2]; 
    double matrizNotas[1][2];
    bool datosIngresados;

public:
    Notas() {
        nombre = "";
        edad = 0;
        carrera = "";
        codigo = "";
        notas[0] = 0;
        notas[1] = 0;
        datosIngresados = false;
    }

    // Cambio a recibir los datos por parámetros para evitar el conflicto del buffer dentro de la clase
    void establecerDatos(string n, int e, string c, string cod) {
        nombre = n;
        edad = e;
        carrera = c;
        codigo = cod;
        datosIngresados = true; // booleano
    }

    bool validarAcceso(string codEntrada) {
        return (codigo == codEntrada && datosIngresados);
    }

    void ingresarNotas() {
        cout << "Ingrese nota de Quices: ";
        cin >> notas[0];
        cout << "Ingrese nota de Parciales: ";
        cin >> notas[1];

        if (notas[0] < 0 || notas[0] > 5 || notas[1] < 0 || notas[1] > 5) {
            cout << "Esas notas que o que? de 0 a 5" << endl;
            notas[0] = 0;
            notas[1] = 0;
        }
        matrizNotas[0][0] = notas[0];
        matrizNotas[0][1] = notas[1];
    }

    void mostrarNotas() {
        cout << "\nNotas de " << nombre << ":" << endl;
        cout << "Quices: " << notas[0] << " | Parciales: " << notas[1] << endl;
    }

    void mostrarMatriz() {
        cout << "\nMatriz [" << nombre << "]: " << matrizNotas[0][0] << " " << matrizNotas[0][1] << endl;
    }

    void mostrarResultado() {
        double promedio = (notas[0] + notas[1]) / 2;
        cout << "\nPromedio de " << nombre << ": " << promedio << endl;
        if (promedio >= 3.5) cout << "Que bien, ya casi se gradua" << endl;
        else if (promedio <= 3.0) cout << "Aun das, no te salgas de la carrera" << endl;
        else cout << "No tan mal, dale con mas ganas" << endl;
    }
};

int main() {
    const int TOTAL = 5;
    Notas lista[TOTAL];
    int opcion;
    string codBusqueda;

    cout << "\n--Bienvenido Querido Docente--" << endl;

    while (true) {
        cout << "\nMENU PRINCIPAL:" << endl;
        cout << "1. Registrar los 5 estudiantes" << endl;
        cout << "2. Ingresar código y notas" << endl;
        cout << "3. Mostrar notas" << endl;
        cout << "4. Mostrar promedio" << endl;
        cout << "5. Mostrar matriz de notas" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        
        if (!(cin >> opcion)) { // Evita bucle infinito si ingresas una letra
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (opcion == 1) {
            for (int i = 0; i < TOTAL; i++) {
                string n, c, cod;
                int e;
                cout << "\n--- Estudiante #" << i + 1 << " ---" << endl;
                cout << "Nombre: ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Limpieza para evitar choque cin/get
                getline(cin, n);
                cout << "Edad: ";
                cin >> e;
                cout << "Carrera: ";
                cin.ignore(); 
                getline(cin, c);
                cout << "Codigo: ";
                cin >> cod;
                
                lista[i].establecerDatos(n, e, c, cod);
            }
            cout << "\n¡Los 5 estudiantes han sido registrados!" << endl;
        }
        else if (opcion >= 2 && opcion <= 5) {
            cout << "Ingrese Codigo del Estudiante: ";
            cin >> codBusqueda;
            
            int indice = -1;
            for (int i = 0; i < TOTAL; i++) {
                if (lista[i].validarAcceso(codBusqueda)) {
                    indice = i;
                    break;
                }
            }

            if (indice != -1) {
                if (opcion == 2) lista[indice].ingresarNotas();
                else if (opcion == 3) lista[indice].mostrarNotas();
                else if (opcion == 4) lista[indice].mostrarResultado();
                else if (opcion == 5) lista[indice].mostrarMatriz();
            } else {
                cout << "\nEse no pago matricula, no lo conozco\n";
            }
        }
        else if (opcion == 6) {
            break;
        }
    }
    return 0;
}
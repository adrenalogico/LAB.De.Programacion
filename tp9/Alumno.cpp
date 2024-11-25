#include <iostream>
#include <string>
using namespace std;

class Alumno {
private:
    string nombre;
    int edad;

public:
    // Constructor para cargar los datos
    Alumno(string n, int e) : nombre(n), edad(e) {}

    // Método para imprimir los datos
    void imprimirDatos() const {
        cout << "Nombre: " << nombre << "\nEdad: " << edad << endl;
    }

    // Método para determinar si es mayor de edad
    void verificarMayorEdad() const {
        if (edad >= 18) {
            cout << nombre << " es mayor de edad." << endl;
        } else {
            cout << nombre << " no es mayor de edad." << endl;
        }
    }
};

int main() {
    Alumno alumno("Juan Perez", 20);
    alumno.imprimirDatos();
    alumno.verificarMayorEdad();
    return 0;
}

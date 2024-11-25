#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    string nombre;
    double sueldo;

public:
    // Constructor para cargar los atributos
    Empleado(string n, double s) : nombre(n), sueldo(s) {}

    // Método para imprimir los datos del empleado
    void imprimirDatos() const {
        cout << "Nombre: " << nombre << "\nSueldo: " << sueldo << endl;
    }

    // Método para verificar si debe pagar impuestos
    void verificarImpuestos() const {
        if (sueldo > 3000) {
            cout << nombre << " debe pagar impuestos." << endl;
        } else {
            cout << nombre << " no debe pagar impuestos." << endl;
        }
    }
};

int main() {
    Empleado empleado("Ana Lopez", 3500);
    empleado.imprimirDatos();
    empleado.verificarImpuestos();
    return 0;
}

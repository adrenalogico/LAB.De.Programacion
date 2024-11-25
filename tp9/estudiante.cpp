#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    double calificacion;

public:
    // Métodos set
    void setNombre(string n) { nombre = n; }
    void setEdad(int e) { edad = e; }
    void setCalificacion(double c) { calificacion = c; }

    // Métodos get
    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
    double getCalificacion() const { return calificacion; }
};

int main() {
    Estudiante estudiante;

    // Asignar valores utilizando los métodos set
    estudiante.setNombre("Carlos Ruiz");
    estudiante.setEdad(21);
    estudiante.setCalificacion(8.5);

    // Imprimir los valores utilizando los métodos get
    cout << "Nombre: " << estudiante.getNombre() << endl;
    cout << "Edad: " << estudiante.getEdad() << endl;
    cout << "Calificación: " << estudiante.getCalificacion() << endl;

    return 0;
}

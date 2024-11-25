#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Alumno {
private:
    string nombre;
    double nota1;
    double nota2;
    double nota3;
    int edad;
    string estado; // "Aprobado" o "Desaprobado"

    // Método para actualizar el estado de aprobación
    void actualizarEstado() {
        estado = calcularPromedio() >= 7 ? "Aprobado" : "Desaprobado";
    }

public:
    // Constructor
    Alumno(string nombre, double nota1, double nota2, double nota3, int edad)
        : nombre(nombre), nota1(nota1), nota2(nota2), nota3(nota3), edad(edad) {
        actualizarEstado();
    }

    // Getters
    string getNombre() const { return nombre; }
    double getNota1() const { return nota1; }
    double getNota2() const { return nota2; }
    double getNota3() const { return nota3; }
    int getEdad() const { return edad; }
    string getEstado() const { return estado; }

    // Método para calcular el promedio
    double calcularPromedio() const {
        return (nota1 + nota2 + nota3) / 3;
    }

    // Métodos para calcular la nota más alta y más baja
    double calcularNotaMaxima() const {
        return max({nota1, nota2, nota3});
    }

    double calcularNotaMinima() const {
        return min({nota1, nota2, nota3});
    }
};

int main() {
    // Vector para almacenar los alumnos
    vector<Alumno> alumnos;

    // Ingresar datos de los alumnos y agregarlos al vector
    string nombre;
    double nota1, nota2, nota3;
    int edad, numAlumnos;

    cout << "Ingrese el número de alumnos: ";
    cin >> numAlumnos;

    for (int i = 0; i < numAlumnos; i++) {
        cout << "\nIngrese el nombre del alumno: ";
        cin >> nombre;
        cout << "Ingrese la edad del alumno: ";
        cin >> edad;
        cout << "Ingrese la nota 1 del alumno: ";
        cin >> nota1;
        cout << "Ingrese la nota 2 del alumno: ";
        cin >> nota2;
        cout << "Ingrese la nota 3 del alumno: ";
        cin >> nota3;

        alumnos.emplace_back(nombre, nota1, nota2, nota3, edad);
    }

    // Mostrar los datos de los alumnos
    cout << "\nDatos de los alumnos:\n";
    for (const auto& alumno : alumnos) {
        cout << "Nombre: " << alumno.getNombre() << endl;
        cout << "Edad: " << alumno.getEdad() << endl;
        cout << "Nota 1: " << alumno.getNota1() << endl;
        cout << "Nota 2: " << alumno.getNota2() << endl;
        cout << "Nota 3: " << alumno.getNota3() << endl;
        cout << "Promedio: " << alumno.calcularPromedio() << endl;
        cout << "Estado: " << alumno.getEstado() << endl;
        cout << "Nota más alta: " << alumno.calcularNotaMaxima() << endl;
        cout << "Nota más baja: " << alumno.calcularNotaMinima() << endl;
        cout << endl;
    }

    // Búsqueda de un alumno por nombre
    string nombreBusqueda;
    cout << "\nIngrese el nombre del alumno que desea buscar: ";
    cin >> nombreBusqueda;

    bool encontrado = false;
    for (const auto& alumno : alumnos) {
        if (alumno.getNombre() == nombreBusqueda) {
            cout << "\nAlumno encontrado:\n";
            cout << "Nombre: " << alumno.getNombre() << endl;
            cout << "Edad: " << alumno.getEdad() << endl;
            cout << "Promedio: " << alumno.calcularPromedio() << endl;
            cout << "Estado: " << alumno.getEstado() << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "\nAlumno no encontrado.\n";
    }

    // Calcular el promedio general de todos los alumnos
    double sumaPromedios = 0;
    for (const auto& alumno : alumnos) {
        sumaPromedios += alumno.calcularPromedio();
    }

    double promedioGeneral = sumaPromedios / numAlumnos;
    cout << "\nPromedio general de todos los alumnos: " << promedioGeneral << endl;

    return 0;
}

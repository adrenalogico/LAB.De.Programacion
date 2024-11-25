#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad) : nombre(nombre), edad(edad) {}
    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
};

bool compararPorEdad(const Persona& p1, const Persona& p2) {
    return p1.getEdad() < p2.getEdad();
}

int main() {
    vector<Persona> personas;
    int numPersonas, edad;
    string nombre;

    cout << "Ingrese el número de personas: ";
    cin >> numPersonas;

    for (int i = 0; i < numPersonas; i++) {
        cout << "Ingrese el nombre: ";
        cin >> nombre;
        cout << "Ingrese la edad: ";
        cin >> edad;
        personas.emplace_back(nombre, edad);
    }

    sort(personas.begin(), personas.end(), compararPorEdad);

    cout << "\nPersonas ordenadas por edad:\n";
    for (const auto& persona : personas) {
        cout << "Nombre: " << persona.getNombre() << ", Edad: " << persona.getEdad() << "\n";
    }

    return 0;
}

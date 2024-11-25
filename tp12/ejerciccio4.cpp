#include <iostream>
#include <string>
using namespace std;

class Socio {
private:
    string nombre;
    int antiguedad;

public:
    Socio() {
        cout << "Ingrese el nombre del socio: ";
        cin >> nombre;
        cout << "Ingrese la antigüedad (en años): ";
        cin >> antiguedad;
    }

    int getAntiguedad() const {
        return antiguedad;
    }

    string getNombre() const {
        return nombre;
    }
};

class Club {
private:
    Socio socios[3];

public:
    void imprimirSocioConMayorAntiguedad() {
        int mayor = socios[0].getAntiguedad();
        string nombreMayor = socios[0].getNombre();

        for (int i = 1; i < 3; i++) {
            if (socios[i].getAntiguedad() > mayor) {
                mayor = socios[i].getAntiguedad();
                nombreMayor = socios[i].getNombre();
            }
        }

        cout << "El socio con mayor antigüedad es: " << nombreMayor << " con " << mayor << " años." << endl;
    }
};

int main() {
    Club club;
    club.imprimirSocioConMayorAntiguedad();
    return 0;
}

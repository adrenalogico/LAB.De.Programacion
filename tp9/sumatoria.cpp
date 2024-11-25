#include <iostream>
using namespace std;

class Sumatoria {
private:
    int suma;

public:
    // Constructor para inicializar la suma
    Sumatoria() : suma(0) {}

    // Método para cargar valores
    void cargarValores() {
        int valor;
        do {
            cout << "Ingrese un valor (0 para finalizar): ";
            cin >> valor;
            suma += valor;
        } while (valor != 0);
    }

    // Destructor para mostrar la suma
    ~Sumatoria() {
        cout << "La suma de los valores ingresados es: " << suma << endl;
    }
};

int main() {
    Sumatoria sumatoria;
    sumatoria.cargarValores();
    return 0;
}

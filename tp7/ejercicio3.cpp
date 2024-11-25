#include <iostream>
using namespace std;

class CNumeros {
    int n1, n2, n3;

public:
    void cargarNumeros() {
        cout << "Ingrese tres números: ";
        cin >> n1 >> n2 >> n3;
        cout << "El mínimo es: " << obtenerMinimo() << endl;
        cout << "El máximo es: " << obtenerMaximo() << endl;
    }

private:
    int obtenerMinimo() {
        return min(n1, min(n2, n3));
    }

    int obtenerMaximo() {
        return max(n1, max(n2, n3));
    }
};

int main() {
    CNumeros obj;
    obj.cargarNumeros();
    return 0;
}

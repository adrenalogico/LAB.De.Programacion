#include <iostream>
using namespace std;

class Entero {
public:
    void cargarValor() {
        int numero;
        cout << "Ingrese un número entero: ";
        cin >> numero;
        mostrarValores(numero);
    }

private:
    void mostrarValores(int n) {
        cout << "Los valores desde 1 hasta " << n << " son:" << endl;
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    Entero obj;
    obj.cargarValor();
    return 0;
}

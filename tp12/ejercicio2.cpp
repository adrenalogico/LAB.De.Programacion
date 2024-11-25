#include <iostream>
#include <vector>
using namespace std;

class MiClase {
private:
    vector<int> datos;

public:
    MiClase() {
        cout << "Ingrese 5 elementos:" << endl;
        for (int i = 0; i < 5; i++) {
            int valor;
            cin >> valor;
            datos.push_back(valor);
        }
    }

    void imprimir() {
        cout << "Vector completo: ";
        for (int valor : datos) {
            cout << valor << " ";
        }
        cout << endl;
    }

    void imprimir(int hasta) {
        cout << "Vector hasta la posición " << hasta << ": ";
        for (int i = 0; i <= hasta && i < datos.size(); i++) {
            cout << datos[i] << " ";
        }
        cout << endl;
    }

    void imprimir(int desde, int hasta) {
        cout << "Vector desde " << desde << " hasta " << hasta << ": ";
        for (int i = desde; i <= hasta && i < datos.size(); i++) {
            cout << datos[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MiClase obj;
    obj.imprimir();
    obj.imprimir(2);
    obj.imprimir(1, 3);
    return 0;
}

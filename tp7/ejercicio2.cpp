#include <iostream>
using namespace std;

class Mayor {
public:
    void cargarNumeros() {
        int a, b;
        cout << "Ingrese el primer número: ";
        cin >> a;
        cout << "Ingrese el segundo número: ";
        cin >> b;
        cout << "El mayor es: " << obtenerMayor(a, b) << endl;
    }

private:
    int obtenerMayor(int x, int y) {
        return (x > y) ? x : y;
    }
};

int main() {
    Mayor obj;
    obj.cargarNumeros();
    return 0;
}

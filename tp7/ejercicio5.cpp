#include <iostream>
#include <vector>
using namespace std;

class CNumeros {
public:
    void calcularNumerosPerfectos(int n) {
        cout << "Números perfectos hasta " << n << ":" << endl;
        for (int i = 1; i <= n; i++) {
            if (esPerfecto(i)) {
                cout << i << endl;
            }
        }
    }

private:
    bool esPerfecto(int numero) {
        int suma = 0;
        for (int i = 1; i < numero; i++) {
            if (numero % i == 0) suma += i;
        }
        return suma == numero;
    }
};

int main() {
    int n;
    cout << "Ingrese el valor de N: ";
    cin >> n;

    CNumeros obj;
    obj.calcularNumerosPerfectos(n);
    return 0;
}

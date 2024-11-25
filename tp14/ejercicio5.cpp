#include <iostream>
using namespace std;

class Calculadora {
public:
    // Suma
    int sumar(int a, int b) { return a + b; }
    float sumar(float a, float b) { return a + b; }

    // Resta
    int restar(int a, int b) { return a - b; }
    float restar(float a, float b) { return a - b; }

    // Multiplicación
    int multiplicar(int a, int b) { return a * b; }
    float multiplicar(float a, float b) { return a * b; }

    // División
    float dividir(int a, int b) { return b != 0 ? (float)a / b : 0; }
    float dividir(float a, float b) { return b != 0 ? a / b : 0; }
};

int main() {
    Calculadora miCalculadora;

    cout << "Suma de enteros: " << miCalculadora.sumar(5, 3) << endl;
    cout << "Suma de flotantes: " << miCalculadora.sumar(5.5f, 3.3f) << endl;

    cout << "Resta de enteros: " << miCalculadora.restar(10, 4) << endl;
    cout << "Resta de flotantes: " << miCalculadora.restar(10.5f, 4.5f) << endl;

    cout << "Multiplicación de enteros: " << miCalculadora.multiplicar(6, 7) << endl;
    cout << "Multiplicación de flotantes: " << miCalculadora.multiplicar(6.5f, 7.2f) << endl;

    cout << "División de enteros: " << miCalculadora.dividir(10, 2) << endl;
    cout << "División de flotantes: " << miCalculadora.dividir(10.5f, 2.5f) << endl;

    return 0;
}

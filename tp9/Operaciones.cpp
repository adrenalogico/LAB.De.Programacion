#include <iostream>
using namespace std;

class Operaciones {
private:
    int num1, num2;

public:
    // Constructor
    Operaciones(int a, int b) : num1(a), num2(b) {}

    // Métodos para realizar las operaciones
    void calcularSuma() const {
        cout << "Suma: " << num1 + num2 << endl;
    }

    void calcularResta() const {
        cout << "Resta: " << num1 - num2 << endl;
    }

    void calcularMultiplicacion() const {
        cout << "Multiplicación: " << num1 * num2 << endl;
    }

    void calcularDivision() const {
        if (num2 != 0) {
            cout << "División: " << static_cast<double>(num1) / num2 << endl;
        } else {
            cout << "División: No es posible dividir entre cero." << endl;
        }
    }
};

int main() {
    Operaciones op(10, 2);
    op.calcularSuma();
    op.calcularResta();
    op.calcularMultiplicacion();
    op.calcularDivision();
    return 0;
}

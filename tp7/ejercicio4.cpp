#include <iostream>
#include <string>
using namespace std;

class CEmpleados {
    string nombre;
    int salario, horasPorDia;

public:
    void cargarDatos() {
        cout << "Ingrese el nombre del empleado: ";
        cin >> nombre;
        cout << "Ingrese el salario base: ";
        cin >> salario;
        cout << "Ingrese las horas trabajadas por día: ";
        cin >> horasPorDia;
        calcularSalario();
    }

private:
    void calcularSalario() {
        int incremento = 0;
        if (horasPorDia == 8) incremento = 250000;
        else if (horasPorDia == 10) incremento = 300000;
        else if (horasPorDia >= 12) incremento = 350000;

        salario += incremento;

        cout << "Empleado: " << nombre << ", Salario final: $" << salario << endl;
    }
};

int main() {
    CEmpleados empleado;
    empleado.cargarDatos();
    return 0;
}

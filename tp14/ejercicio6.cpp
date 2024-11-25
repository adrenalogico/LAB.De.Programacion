#include <iostream>
#include <string>
using namespace std;

// Clase Comparador
class Comparador {
public:
    // Comparar enteros
    bool comparar(int a, int b) { return a == b; }

    // Comparar cadenas
    bool comparar(string a, string b) { return a == b; }

    // Comparar flotantes con tolerancia
    bool comparar(float a, float b, float tolerancia = 0.001f) { return fabs(a - b) < tolerancia; }
};

// Clase Conversor
class Conversor {
public:
    // Longitud: metros a kilómetros
    float convertir(float metros) { return metros / 1000; }

    // Masa: kilogramos a libras
    float convertir(float kg, string tipo) {
        if (tipo == "libras") return kg * 2.20462;
        else if (tipo == "gramos") return kg * 1000;
        return kg;
    }

    // Temperatura: Celsius a Fahrenheit
    float convertirTemperatura(float celsius) { return (celsius * 9 / 5) + 32; }
};

int main() {
    Comparador miComparador;
    cout << "Comparar enteros (5, 5): " << (miComparador.comparar(5, 5) ? "Iguales" : "Diferentes") << endl;
    cout << "Comparar cadenas ('Hola', 'Hola'): " << (miComparador.comparar("Hola", "Hola") ? "Iguales" : "Diferentes") << endl;

    Conversor miConversor;
    cout << "1000 metros a kilómetros: " << miConversor.convertir(1000) << " km" << endl;
    cout << "70 kg a libras: " << miConversor.convertir(70, "libras") << " libras" << endl;
    cout << "25°C a Fahrenheit: " << miConversor.convertirTemperatura(25) << " °F" << endl;

    return 0;
}

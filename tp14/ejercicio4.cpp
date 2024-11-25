#include <iostream>
#include <cmath>
using namespace std;

// Clase base Figura
class Figura {
protected:
    string color;
    int posicionX;
    int posicionY;

public:
    Figura(string _color, int _posX, int _posY)
        : color(_color), posicionX(_posX), posicionY(_posY) {}

    virtual double calcularArea() = 0; // Método abstracto
    virtual double calcularPerimetro() = 0;

    void mostrarInformacion() {
        cout << "Color: " << color << ", Posición: (" << posicionX << ", " << posicionY << ")" << endl;
    }
};

// Clase derivada Circulo
class Circulo : public Figura {
private:
    double radio;

public:
    Circulo(string _color, int _posX, int _posY, double _radio)
        : Figura(_color, _posX, _posY), radio(_radio) {}

    double calcularArea() override {
        return M_PI * radio * radio;
    }

    double calcularPerimetro() override {
        return 2 * M_PI * radio;
    }
};

// Clase derivada Rectangulo
class Rectangulo : public Figura {
private:
    double base;
    double altura;

public:
    Rectangulo(string _color, int _posX, int _posY, double _base, double _altura)
        : Figura(_color, _posX, _posY), base(_base), altura(_altura) {}

    double calcularArea() override {
        return base * altura;
    }

    double calcularPerimetro() override {
        return 2 * (base + altura);
    }
};

// Clase derivada Triangulo
class Triangulo : public Figura {
private:
    double base;
    double altura;

public:
    Triangulo(string _color, int _posX, int _posY, double _base, double _altura)
        : Figura(_color, _posX, _posY), base(_base), altura(_altura) {}

    double calcularArea() override {
        return (base * altura) / 2;
    }

    double calcularPerimetro() override {
        // Solo funciona para triángulos equiláteros como ejemplo
        return 3 * base;
    }
};

int main() {
    Circulo miCirculo("Rojo", 5, 5, 10);
    Rectangulo miRectangulo("Azul", 0, 0, 4, 8);
    Triangulo miTriangulo("Verde", 2, 2, 6, 4);

    cout << "Información del círculo:" << endl;
    miCirculo.mostrarInformacion();
    cout << "Área: " << miCirculo.calcularArea() << ", Perímetro: " << miCirculo.calcularPerimetro() << endl;

    cout << "\nInformación del rectángulo:" << endl;
    miRectangulo.mostrarInformacion();
    cout << "Área: " << miRectangulo.calcularArea() << ", Perímetro: " << miRectangulo.calcularPerimetro() << endl;

    cout << "\nInformación del triángulo:" << endl;
    miTriangulo.mostrarInformacion();
    cout << "Área: " << miTriangulo.calcularArea() << ", Perímetro: " << miTriangulo.calcularPerimetro() << endl;

    return 0;
}

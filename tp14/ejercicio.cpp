#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Mesa {
private:
    int numero;
    int comensales;
    bool ocupada;

public:
    Mesa(int _numero) : numero(_numero), comensales(0), ocupada(false) {}

    void reservar(int _comensales) {
        if (ocupada) {
            cout << "Mesa " << numero << " ya está ocupada." << endl;
        } else {
            comensales = _comensales;
            ocupada = true;
            cout << "Mesa " << numero << " reservada para " << comensales << " comensales." << endl;
        }
    }

    void liberar() {
        if (!ocupada) {
            cout << "Mesa " << numero << " ya está libre." << endl;
        } else {
            ocupada = false;
            comensales = 0;
            cout << "Mesa " << numero << " ahora está libre." << endl;
        }
    }

    bool estaLibre() { return !ocupada; }
};

class Restaurante {
private:
    vector<Mesa> mesas;

public:
    Restaurante(int totalMesas) {
        for (int i = 1; i <= totalMesas; ++i) {
            mesas.emplace_back(i);
        }
    }

    void reservarMesa(int numero, int comensales) {
        if (numero > 0 && numero <= mesas.size()) {
            mesas[numero - 1].reservar(comensales);
        } else {
            cout << "Número de mesa inválido." << endl;
        }
    }

    void liberarMesa(int numero) {
        if (numero > 0 && numero <= mesas.size()) {
            mesas[numero - 1].liberar();
        } else {
            cout << "Número de mesa inválido." << endl;
        }
    }

    int contarMesasLibres() {
        int libres = 0;
        for (const auto& mesa : mesas) {
            if (mesa.estaLibre()) libres++;
        }
        return libres;
    }
};

int main() {
    Restaurante miRestaurante(5);

    miRestaurante.reservarMesa(1, 4);
    miRestaurante.reservarMesa(3, 2);

    cout << "\nMesas libres: " << miRestaurante.contarMesasLibres() << endl;

    miRestaurante.liberarMesa(1);
    cout << "\nMesas libres después de liberar: " << miRestaurante.contarMesasLibres() << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int paginas;

public:
    Libro(string _titulo, string _autor, int _paginas)
        : titulo(_titulo), autor(_autor), paginas(_paginas) {}

    string getTitulo() { return titulo; }
    int getPaginas() { return paginas; }

    void mostrarInfo() {
        cout << "Título: " << titulo << ", Autor: " << autor << ", Páginas: " << paginas << endl;
    }
};

class Biblioteca {
private:
    vector<Libro> libros;

public:
    void agregarLibro(const Libro& libro) {
        libros.push_back(libro);
    }

    void eliminarLibro(string titulo) {
        for (auto it = libros.begin(); it != libros.end(); ++it) {
            if (it->getTitulo() == titulo) {
                libros.erase(it);
                cout << "Libro eliminado: " << titulo << endl;
                return;
            }
        }
        cout << "Libro no encontrado." << endl;
    }

    void buscarLibro(string titulo) {
        for (const auto& libro : libros) {
            if (libro.getTitulo() == titulo) {
                libro.mostrarInfo();
                return;
            }
        }
        cout << "Libro no encontrado." << endl;
    }

    int calcularPaginasTotales() {
        int total = 0;
        for (const auto& libro : libros) {
            total += libro.getPaginas();
        }
        return total;
    }
};

int main() {
    Biblioteca miBiblioteca;

    Libro libro1("El Principito", "Antoine de Saint-Exupéry", 96);
    Libro libro2("1984", "George Orwell", 328);
    Libro libro3("Cien Años de Soledad", "Gabriel García Márquez", 417);

    miBiblioteca.agregarLibro(libro1);
    miBiblioteca.agregarLibro(libro2);
    miBiblioteca.agregarLibro(libro3);

    cout << "Buscando '1984':" << endl;
    miBiblioteca.buscarLibro("1984");

    cout << "\nTotal de páginas en la biblioteca: " << miBiblioteca.calcularPaginasTotales() << endl;

    cout << "\nEliminando '1984':" << endl;
    miBiblioteca.eliminarLibro("1984");

    cout << "\nBuscando '1984':" << endl;
    miBiblioteca.buscarLibro("1984");

    return 0;
}

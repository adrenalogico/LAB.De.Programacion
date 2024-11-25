1. ¿Qué es la herencia y cuál es su principal objetivo en la programación orientada a objetos?
La herencia es un principio fundamental de la programación orientada a objetos que permite a una clase (clase derivada) heredar atributos y métodos de otra clase (clase base o padre).
El principal objetivo es reutilizar el código existente, promover la modularidad y facilitar la extensibilidad del software al modelar relaciones jerárquicas entre objetos.

2. ¿Cuál es la importancia de la encapsulación en el contexto de la herencia?
La encapsulación garantiza que los datos de una clase estén protegidos del acceso directo desde fuera de la misma. En el contexto de la herencia:

Controla cómo las clases derivadas acceden a los atributos y métodos de la clase base, gracias a los modificadores de acceso (private, protected, public).
Evita errores y mantiene la integridad de los datos, permitiendo que solo los métodos adecuados puedan modificarlos o acceder a ellos.
3. Describe los tipos de visibilidad (public, private, protected) en el contexto de herencia.
public: Los miembros públicos de la clase base son accesibles desde las clases derivadas y desde fuera de la jerarquía.
protected: Los miembros protegidos de la clase base son accesibles desde las clases derivadas, pero no desde fuera de la jerarquía.
private: Los miembros privados de la clase base no son accesibles directamente desde las clases derivadas o fuera de la clase base.
4. ¿Qué es una especialización?
La especialización es un concepto que describe cómo una clase derivada extiende o personaliza la funcionalidad de una clase base, añadiendo atributos o métodos específicos. Por ejemplo, si Empleado hereda de Persona, puede especializarse añadiendo el atributo sueldo.

5. ¿Cuáles son las ventajas y los posibles problemas que pueden surgir al utilizar la herencia múltiple?
Ventajas:

Permite combinar funcionalidades de múltiples clases base en una única clase derivada.
Reutiliza código de forma eficiente cuando diferentes clases comparten comportamiento.
Problemas:

Conflictos de ambigüedad: Cuando dos clases base tienen métodos o atributos con el mismo nombre.
Complejidad en el mantenimiento: Aumenta la dificultad para depurar y comprender el código.
Problemas del diamante: En caso de clases base compartidas, las clases derivadas pueden heredar múltiples copias de los mismos atributos o métodos (solucionado con herencia virtual en C++).
B. Código a analizar
1. Explicar el funcionamiento del programa con sus palabras.
Este programa ilustra una jerarquía de herencia:

Clase Persona (base): Contiene atributos nombre y edad, un constructor para inicializarlos y un método mostrarPersona que imprime estos atributos.
Clase Empleado: Hereda de Persona y añade el atributo sueldo. Tiene su propio constructor para inicializar sueldo y un método mostrarEmpleado que utiliza mostrarPersona.
Clase Estudiante: Hereda de Persona y añade el atributo notaFinal.
Clase Tecnico: Hereda de Estudiante y añade el atributo especialidad.
En el main, se crean objetos de cada clase y se llaman a sus métodos para imprimir la información correspondiente.

2. Completar los comentarios indicados

class Persona {
private: // Atributos de la clase base
    string nombre;  // Nombre de la persona
    int edad;       // Edad de la persona

public: // Métodos de la clase base
    Persona(string, int);  // Constructor para inicializar los atributos
    void mostrarPersona(); // Método para imprimir los atributos de la persona
};

class Empleado : public Persona {
private: // Atributos propios de Empleado
    float sueldo;  // Sueldo del empleado

public: // Métodos propios de Empleado
    Empleado(string, int, float);  // Constructor para inicializar sueldo y atributos base
    void mostrarEmpleado();        // Método para imprimir atributos de Persona y sueldo
};
3. ¿Cuál es el nombre de la clase padre en la jerarquía?
La clase padre es Persona.

4. ¿Qué clase hereda de la clase Persona?
Las clases Empleado y Estudiante heredan directamente de Persona.

5. ¿Cuál es la relación entre las clases Estudiante y Tecnico?
La clase Tecnico hereda de Estudiante, por lo que Tecnico es una especialización de Estudiante.

6. ¿Cuál es el propósito del constructor de Empleado?
El constructor de Empleado inicializa el atributo sueldo y utiliza el constructor de Persona para inicializar los atributos nombre y edad.

7. ¿Cuál es el propósito del método mostrarPersona()?
El método mostrarPersona imprime los atributos nombre y edad de la clase base Persona.

8. ¿Qué método se utiliza para mostrar el salario del empleado?
El método mostrarEmpleado muestra el salario del empleado utilizando el atributo sueldo.
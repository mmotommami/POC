#include <iostream>
#include <list>

// Clase Pared
class Pared {
public:
    std::list<Ventana> ventanas;
    std::list<Puerta> puertas;

    // Constructor de la clase Pared
    Pared() {
        // Constructor de Pared, puedes inicializar atributos específicos aquí si es necesario.
    }

    // Métodos de la clase Pared (si los hay)
};

// Clase Piso
class Piso {
    // Atributos y métodos de la clase Piso
};

// Clase Ventana
class Ventana {
    // Atributos y métodos de la clase Ventana
};

// Clase Puerta
class Puerta {
    // Atributos y métodos de la clase Puerta
};

// Clase Techo
class Techo {
public:
    std::list<Pared> paredes; // Atributo de lista de paredes

    // Constructor de la clase Techo
    Techo() {
        // Constructor de Techo, puedes inicializar atributos específicos aquí si es necesario.
    }

    // Método para validar un mínimo de 4 paredes en la lista
    bool validarMinimoParedes() {
        return paredes.size() >= 4;
    }
};

// Clase Habitacion
class Habitacion {
public:
    std::string nombre;
    std::list<Pared> paredes;
    std::list<Piso> pisos;
    std::list<Ventana> ventanas;
    std::list<Puerta> puertas;
    Techo techo;

    // Método para ensamblar la habitación
    void ensamblarHabitacion() {
        std::cout << "Ensamblar habitación: " << nombre << std::endl;

        // Lógica para ensamblar la habitación
        for (int i = 0; i < 4; ++i) {
            paredes.push_back(Pared()); // Agregar 4 paredes
        }
        pisos.push_back(Piso()); // Agregar un piso
        ventanas.push_back(Ventana()); // Agregar una ventana
        puertas.push_back(Puerta()); // Agregar una puerta
        techo = Techo(); // Asignar un techo
    }

    // Método para paquetizar piezas de la habitación
    void paquetizarPiezas() {
        std::cout << "Paquetizar piezas de la habitación: " << nombre << std::endl;

        // Lógica para paquetizar las piezas de la habitación, por ejemplo, empaquetar las piezas en cajas.
        std::cout << "Empaquetando las piezas de la habitación " << nombre << " en cajas." << std::endl;
    }
};

// Clase Casa
class Casa {
public:
    std::list<Habitacion> habitaciones;

    // Método para acomodar habitaciones y otras funcionalidades de la casa
};

int main() {
    // Crear instancias de las clases y utilizar sus métodos
    Casa myCasa;

    // Agregar habitaciones a la casa con el orden deseado
    Habitacion habitacion1;
    habitacion1.nombre = "Habitación 1";
    habitacion1.ensamblarHabitacion(); // Ensamblar la habitación
    myCasa.habitaciones.push_back(habitacion1);

    // Agregar elementos (paredes, pisos, ventanas, puertas, techo) a la habitación1 en el orden especificado

    // Paquetizar las piezas de la habitación
    habitacion1.paquetizarPiezas();

    return 0;
}
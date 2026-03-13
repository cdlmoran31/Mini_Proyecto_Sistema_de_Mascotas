#include <iostream>
using namespace std;

/*
-----------------------------------------
Clase: Mascota
Descripción:
Representa una mascota con varios atributos
y métodos para mostrar y modificar su estado.
-----------------------------------------
*/

class Mascota {

private:
    int felicidad; // Atributo privado (encapsulado)

public:

    // Atributos públicos
    string nombre;
    string color;
    string raza;
    int edad;

    /*
    -----------------------------------------
    Metodo: setFelicidad
    Descripción:
    Modifica el nivel de felicidad de la mascota.
    Recibe un valor y lo suma al nivel actual.
    -----------------------------------------
    */
    void setFelicidad(int aumento) {
        felicidad = felicidad + aumento;
        cout << nombre << " ahora tiene un nivel de felicidad de: "
             << felicidad << endl;
    }

    /*
    -----------------------------------------
    Metodo: getFelicidad
    Descripción:
    Permite obtener el valor del atributo
    privado felicidad.
    -----------------------------------------
    */
    int getFelicidad() {
        return felicidad;
    }

    /*
    -----------------------------------------
    Metodo: MostrarDatos
    Descripción:
    Muestra todos los datos de la mascota.
    -----------------------------------------
    */
    void MostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Color: " << color << endl;
        cout << "Raza: " << raza << endl;
        cout << "Edad: " << edad << endl;
        cout << "Nivel de felicidad: " << felicidad << endl;
        cout << "--------------------------" << endl;
    }

    /*
    -----------------------------------------
    Metodo: InicializarFelicidad
    Descripción:
    Permite darle un valor inicial a la
    felicidad de la mascota.
    -----------------------------------------
    */
    void InicializarFelicidad(int valor) {
        felicidad = valor;
    }
};

int main() {

    // Creación de dos objetos de la clase Mascota
    Mascota mascota1;
    Mascota mascota2;

    // Asignación de valores al primer objeto
    mascota1.nombre = "Firulais";
    mascota1.color = "Cafe";
    mascota1.raza = "Labrador";
    mascota1.edad = 5;
    mascota1.InicializarFelicidad(50);

    // Asignación de valores al segundo objeto
    mascota2.nombre = "Michi";
    mascota2.color = "Blanco";
    mascota2.raza = "Siames";
    mascota2.edad = 3;
    mascota2.InicializarFelicidad(40);

    cout << "DATOS INICIALES" << endl;
    cout << "================" << endl;

    // Mostrar datos iniciales
    mascota1.MostrarDatos();
    mascota2.MostrarDatos();

    cout << endl;
    cout << "MODIFICANDO FELICIDAD..." << endl;

    // Modificar un atributo usando un metodo
    mascota1.setFelicidad(10);
    mascota2.setFelicidad(15);

    cout << endl;
    cout << "DATOS ACTUALIZADOS" << endl;
    cout << "==================" << endl;

    // Mostrar datos nuevamente
    mascota1.MostrarDatos();
    mascota2.MostrarDatos();

    return 0;
}
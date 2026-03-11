#include <iostream>
using namespace std;

class Mascotas {
private:
    int Id_Mascotas; // atributos

public:
    string Nombre; // atributos
    string Color; // atributos
    string Raza; // atributos
    float Peso; // atributos
    int Edad; // Atributos


    void saltar() { //Metodo
        cout << Nombre << " Salta";
    }
};
class Mascotas_Perros : public Mascotas {
public:
    void ladrar() {
   cout << Nombre << "el perro esta ladrando";
    }
};
class Mascotas_Gatos : public Mascotas {
public:
    void ladrar() {
        cout << Nombre << "el perro esta ladrando";
    }
};
int main () {
    Mascotas mascotas1;
    mascotas1.Nombre = "Rudolf";
    cout << mascotas1.Nombre << endl;
    mascotas1.Color = "azul";
    cout << mascotas1.Color << endl;
    mascotas1.Edad = 10;
    cout << mascotas1.Edad << endl;
    mascotas1.Peso = 7.5;
    cout << mascotas1.Peso << endl;
    mascotas1.Raza = "shitzu";
    cout << mascotas1.Raza << endl;
    mascotas1.saltar();

    cout << endl << endl;

    Mascotas_Perros mascotas2;
    mascotas2.Nombre = "rufo";
    cout << mascotas2.Nombre << endl;
    mascotas2.Color = "verde";
    cout << mascotas2.Color << endl;
    mascotas2.Edad = 5;
    cout << mascotas2.Edad << endl;
    mascotas2.Peso = 8.5;
    cout << mascotas2.Peso << endl;
    mascotas2.Raza = "galez";
    cout << mascotas2.Raza << endl;
    mascotas2.ladrar();


}
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Crear dos cadenas
    string saludo = "Hola ";
    string despedida = "mundo!";

    // Concatenar las dos cadenas y asignar el resultado a una tercera cadena
    string saludoCompleto = saludo + despedida;

    // Imprimir la cadena resultante
    cout << "Cadena resultante: " << saludoCompleto << endl;

    return 0;
}

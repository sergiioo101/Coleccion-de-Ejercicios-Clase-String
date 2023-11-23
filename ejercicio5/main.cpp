#include <iostream>
#include <string>

int main() {
    // Crear una cadena
    std::string str = "Inteligencia Artificial";

    // Obtener una subcadena de la cadena original
    std::string sub_str = str.substr(13, 10); // "Artificial"

    // Insertar otra cadena al principio de la cadena original
    str.insert(0, "La ");

    // Imprimir la subcadena y la cadena resultante
    std::cout << "Subcadena: " << sub_str << std::endl;
    std::cout << "Cadena resultante: " << str << std::endl;

    return 0;
}

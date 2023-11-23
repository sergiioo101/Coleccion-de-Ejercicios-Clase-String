#include <iostream>
#include <string>

// Función para imprimir el tamaño de la cadena y la cadena misma
void imprimirTamanoYCadena(const std::string& str) {
    std::cout << "Tamaño de la cadena: " << str.size() << std::endl;
}

// Función para verificar si la cadena está vacía y mostrar la cadena
void verificarCadenaVaciaYMostrar(const std::string& str) {
    std::cout << "¿Esta la cadena vacia? " << (str.empty() ? "Sí" : "No") << std::endl;
    std::cout << "Cadena: " << str << std::endl;
}

int main() {
    std::string sentence = "Ruben es el mejor profesor de la UAX";

    // Llamar a las funciones mejoradas
    imprimirTamanoYCadena(sentence);
    verificarCadenaVaciaYMostrar(sentence);

    return 0;
}


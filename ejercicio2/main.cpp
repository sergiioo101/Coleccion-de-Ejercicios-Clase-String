#include <iostream>
#include <string>
using namespace std;

// Función para imprimir el tamaño de la cadena y la cadena misma
void imprimirTamanoYCadena(const string& str) {
    cout << "Tamaño de la cadena: " << str.size() << endl;
}

// Función para verificar si la cadena está vacía y mostrar la cadena
void verificarCadenaVaciaYMostrar(const string& str) {
    cout << "¿Esta la cadena vacia? " << (str.empty() ? "Sí" : "No") << endl;
    cout << "Cadena: " << str << endl;
}

int main() {
    string sentence = "Ruben es el mejor profesor de la UAX";

    // Llamar a las funciones mejoradas
    imprimirTamanoYCadena(sentence);
    verificarCadenaVaciaYMostrar(sentence);

    return 0;
}


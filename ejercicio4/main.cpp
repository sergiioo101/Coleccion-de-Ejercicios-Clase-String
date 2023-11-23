#include <iostream>
#include <string>
using namespace std;
int main() {
    // Crear una cadena
    string sentence = "El lenguaje C++ es poderoso.";
    string sub_str = "C++";

    // Buscar la subcadena en la cadena
    size_t pos = sentence.find(sub_str);

    // Verificar si la subcadena fue encontrada
    if (pos != string::npos) {
        cout << "Subcadena encontrada en la posicion: " << pos << endl;

        // Reemplazar la subcadena por otra subcadena
        string new_sentence = sentence;
        new_sentence.replace(pos, sub_str.length(), "Python");

        // Imprimir la cadena resultante
        cout << "Cadena resultante: " << new_sentence << endl;
    } else {
        cout << "Subcadena no encontrada." << endl;
    }

    return 0;
}

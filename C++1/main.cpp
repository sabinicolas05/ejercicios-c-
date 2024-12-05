#include <iostream>
#include "funciones.hpp"

using namespace std;

int main() {
    int n;
    cout << "Ingresa un número: ";
    cin >> n;

    if (n > 0) {
       
        int resultado = suma(n);
        cout << "La suma desde 1 hasta " << n << " es: " << resultado << endl;
    } else {
        cout << "Por favor, ingresa un número positivo." << endl;
    }

    return 0;
}

#include <iostream>
#include "funciones.hpp"

using namespace std;
int main() {
    int n;

    std::cout << "Ingrese un número  ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "No hay números primos menores que " << n << "." << std::endl;
        return 0;
    }


    std::vector<int> primos = cribaEratostenes(n);


    mostrarPrimos(primos);

    return 0;
}
#include "funciones.hpp"
#include <iostream>

using namespace std;

// Implementación de la Criba de Eratóstenes
std::vector<int> cribaEratostenes(int n) {
    std::vector<bool> esPrimo(n + 1, true);
    esPrimo[0] = esPrimo[1] = false; // 0 y 1 no son primos

    for (int i = 2; i * i <= n; ++i) {
        if (esPrimo[i]) {
            for (int j = i * i; j <= n; j += i) {
                esPrimo[j] = false;
            }
        }
    }

    // Crear una lista con los números primos
    std::vector<int> primos;
    for (int i = 2; i <= n; ++i) {
        if (esPrimo[i]) {
            primos.push_back(i);
        }
    }

    return primos;
}

// Función para mostrar los números primos
void mostrarPrimos(const std::vector<int>& primos) {
    std::cout << "Números primos encontrados:\n";
    for (int primo : primos) {
        std::cout << primo << " ";
    }
    std::cout << std::endl;
}
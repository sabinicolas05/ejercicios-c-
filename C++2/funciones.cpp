#include "funciones.hpp"
#include <iostream>

using namespace std;

void crearMatrizEspejo(int n, int** matriz, int** matrizEspejo) {
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrizEspejo[j][i] = matriz[i][j]; 
        }
    }
}
    

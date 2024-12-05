#include <iostream>
#include "funciones.hpp"

using namespace std;


int main() {
    int n;

    // Pedir el tamaño de la matriz
    cout << "Introduce el tamaño de la matriz  ";
    cin >> n;

    // Crear las matrices dinámicamente
    int** matriz = new int*[n]; // Creamos un puntero de n filas
    int** matrizEspejo = new int*[n]; // Creamos otro puntero para la matriz espejo
    
    // Asignamos memoria para cada fila de las matrices
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[n];         // Asignamos memoria para las columnas de la matriz original
        matrizEspejo[i] = new int[n];   // Asignamos memoria para las columnas de la matriz espejo
    }

    // Pedir los elementos de la matriz
    cout << "Introduce los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento en [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Mostrar la matriz original
    cout << "\nMatriz original:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Crear la matriz espejo
    crearMatrizEspejo(n, matriz, matrizEspejo);

    // Mostrar la matriz espejo
    cout << "\nMatriz espejo:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrizEspejo[i][j] << " ";
        }
        cout << endl;
    }

    // Liberar memoria
    for (int i = 0; i < n; i++) {
        delete[] matriz[i];         // Liberamos la memoria de cada fila de la matriz original
        delete[] matrizEspejo[i];   // Liberamos la memoria de cada fila de la matriz espejo
    }
    delete[] matriz;               // Liberamos la memoria del puntero de filas de la matriz original
    delete[] matrizEspejo;         // Liberamos la memoria del puntero de filas de la matriz espejo

    return 0;
}

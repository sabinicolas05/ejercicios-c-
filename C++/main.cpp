#include <iostream>
#include "funciones.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int array[2][2]={
        {1,2},
        {3,4}
    };
    //cout <<array[0] <<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    suma (2,3);

    float resMulti =0.0;
    resMulti = multiplicacion(3.2,3);

    cout << "El resultado de la multiplicacion es: " << resMulti << endl;

    return 0;
 
}
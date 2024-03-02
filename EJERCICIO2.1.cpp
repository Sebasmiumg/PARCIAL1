//DESAROLLA EN C++ UN CICCLO QUE SUME LOS NUMEROS IMPARES EN UNA VARIABLE A Y LOS NUMEROS PARES EN UNA VARIABLE B EN UN RANGO DE 0 A 50

#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 0;
    int numero = 0;

    while (numero <= 50) {
        if (numero % 2 == 0) {
            b += numero;

        } else {

            a += numero;
        }
        numero++;
    }

    cout << "La suma de los numeros pares de 0 a 50 es: " << b << endl;
    cout << "La suma de los numeros impares de 0 a 50 es: " << a << endl;

    return 0;
}

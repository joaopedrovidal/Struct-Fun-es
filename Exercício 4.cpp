// Exercício 4:
//
// Construir um programa que calcule e apresente o resultado da conversão de 0 a 100  graus Fahrenheit para graus Celsius.
// O cálculo dessa conversão deve ficar isolado em  uma função estar de acordo com a seguinte fórmula: C=5/9.(F-32)

#include <iostream>
using namespace std;


float temperatura(float f) {
    float c;
    c = f * (5.0/9.0) - 32.0;
    return c;
}

int main () {
    float f,c;
    for (f = 0; f <= 100; f++) {
        c = temperatura(f);
        cout << f << " graus Fahrenheit equivalem a " << c << " graus Celsius " << endl;
    }
    return 0;
}

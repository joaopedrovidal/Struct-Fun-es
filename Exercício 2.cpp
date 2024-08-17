//  Exercício 2:
//  Construir um programa que na função main leia valores informados pelo usuário -> Ok
//  e  utilize uma função para retornar o maior deles
//  Em seguida, a função main deve  imprimir o resultado

#include <iostream>
using namespace std;

void imprimeResultado(int resultado) {
    cout << "O maior valor e: " << resultado << endl;
}

int maior(int valores[]) {
    int maior = valores[0];
    for (int i = 1; i < 3; ++i) {
        if (valores[i] > maior){
            maior = valores[i];
        }
    }
    return maior;
}

int main() {
    int valores[3];
    int resultado = maior (valores);
    for(int i = 0; i <3; i++) {
        cout << "Informe o valor: " << endl;
        cin >> valores[i];
    }
    imprimeResultado(resultado);
    return 0;
}


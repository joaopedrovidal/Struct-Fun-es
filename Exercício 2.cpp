//  Exercício 2:
//  Construir um programa que na função main leia valores informados pelo usuário -> Ok
//  e  utilize uma função para retornar o maior deles
//  Em seguida, a função main deve  imprimir o resultado

#include <iostream>
using namespace std;

void imprimeResultado(int Resultado) {
    cout << "O maior numero e: " << Resultado << endl;
}

int maior(int n1, int n2, int n3) {
    int maior = n1;

    if (n2 > maior) {
        maior = n2;
    } if(n3 > maior){
        maior = n3;
    }
    return maior;
}

int main () {
    int n1, n2, n3;
    cout << "Informe um valor: " << endl;
    fflush(stdin);
    cin >> n1;
    cout << "Informe um valor: " << endl;
    fflush(stdin);
    cin >> n2;
    cout << "Informe um valor: " << endl;
    fflush(stdin);
    cin >> n3;
    int Resultado = maior(n1, n2, n3);
    imprimeResultado(Resultado);
    return 0;
}

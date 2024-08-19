// Exercício 6:
//
// Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal.
//
// Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para  mulheres, peso ideal = 62.1 x alt - 44.7.


#include <iostream>
using namespace std;

float peso(float alt, string sexo){
    float peso;
        if(sexo == "masculino") {
            peso = (72.7 * alt) - 58;
            return peso;
        }else if(sexo == "feminino") {
            peso = (62.1 * alt) - 44.7;
            return peso;
        }else {
            return -1;
        }
    return peso;
}
int main() {
    float alt;
    string sexo;
    cout << "Digite seu sexo (masculino ou feminino): " << endl;
    getline(cin, sexo);
    if (sexo != "masculino" && sexo != "feminino") {
        cout << "Sexo invalido, por favor, digite masculino ou feminino" << endl;
        return -1;
    }
    cout << "Digite sua altura em metros: " << endl;
    cin >> alt;
    float pesoIdeal = peso (alt, sexo);
    if(pesoIdeal != -1) {
        cout << "O peso ideal e: " << pesoIdeal << " kg" << endl;
    }else
        cout << "Erro ao calcular o peso ideal" << endl;
    return 0;
}
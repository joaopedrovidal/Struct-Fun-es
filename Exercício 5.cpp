// Exercício 5:
// Faça um procedimento que recebe a idade de um nadador por parâmetro e informa a  categoria desse nadador de acordo com a tabela abaixo:
// IDADE: 5 a 7 anos, 8 a 10 anos, 11-13 anos, 14-17 anos, Maiores de 18 anos (inclusive)
// CATEGORIAS : Infantil A, Infantil B, Juvenil A, Juvenil B, Adulto
// 5 a 7 anos -> Infantil A
// 8 a 10 anos -> Infantil B
// 11-13 anos - > Juvenil A
// 14-17 anos -> Juvenil B
// Maiores de 18 anos (inclusive) -> Adulto


#include <iostream>
using namespace std;

struct Nadador {
    char nome [50];
    int idade;
    string categoria;
};

string categoria(int idade) {
    cout << "Digite a sua idade: ";
    if (idade >= 5 && idade <= 7) {
        return "Infantil A";
    }else if (idade >= 8 && idade <= 10) {
        return  "Infantil B";
    }else if (idade >= 11 && idade <= 13) {
       return "Juvenil A";
    }else if (idade >= 14 && idade<= 17) {
        return  "Juvenil B";
    }else if (idade >= 18) {
        return  "Adulto";
    }else {
        return "Idade fora das categorias";
    }
}

int main() {
    Nadador nadador;

    cout << "Digite o seu nome: " << endl;
    cin.get(nadador.nome, 50);
    cout << "Digite a sua idade:" << endl;
    cin >> nadador.idade;

    nadador.categoria = categoria(nadador.idade);

    cout << "Nome: " << nadador.nome << endl;
    cout << "Idade: " << nadador.idade << endl;
    cout << "Categarria: " << nadador.categoria << endl;

    return 0;
}
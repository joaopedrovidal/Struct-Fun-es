//Exercício 1:
//
//Escreva um programa que:
//utilize um vetor de no máximo 50 alunos, contendo matrícula  e nome -> OK
//que faça a leitura dos dados -> OK
//e os apresente em seguida na tela -> Ok
//O aluno deve ser  determinado através de um struct e seu nome deve ter no máximo 100 caracteres. -> OK

#include <iostream>
using namespace std;

struct Aluno {
    char nome[100];
    int matricula = 0;
};

Aluno cadastroAluno() {
    fflush(stdin);
    Aluno Aluno;
    cout << "Digite seu nome: " << endl;
    cin >> Aluno.nome;
    cout << "Digite seu numero de matricula: " << endl;
    cin >> Aluno.matricula;

    return Aluno;
}

void imprimeAluno(Aluno Aluno) {
    cout << "Nome: " << Aluno.nome << endl;
    cout << "Matricula: " << Aluno.matricula << endl;
}

int main() {
    int quantidadeAlunos = 0;
    char verificador[50];
    cout << "Quantos alunos voce deseja cadastrar? " << endl;
    cin >> quantidadeAlunos;
    Aluno listaAlunos[quantidadeAlunos];
    while (true) {
        fflush(stdin);
        cout <<"Voce gostaria de cadastrar um aluno? "<< endl;
        cin.getline(verificador, 50);
        if (verificador[0] == 'n') {
            break;
        }else {
            for (int i = 0; i < quantidadeAlunos; i++) {
                listaAlunos[i] = cadastroAluno();
            }
        }
    }
    for (int i = 0; i < 50; i++) {
        imprimeAluno(Aluno(listaAlunos[i]));
    }
    return 0;
}
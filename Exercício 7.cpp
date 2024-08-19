// Exercício 7:
//
// Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa  idade expressa em dias.

#include <iostream>
#include <cmath>
using namespace std;

int idadeEmDias(int anos, int meses, int dias) {

  const int diasPorAno = 365;

  const double diasPorMes = 30.44;

  double totalDias = (anos * diasPorAno) + (meses * diasPorMes) + dias;

  return static_cast<int>(round(totalDias));
}

int main() {
  int anos, meses, dias;
  cout << "Digite sua idade em anos, meses e dias:" << endl;
  cout << "Anos: ";
  cin >> anos;
  cout << "Meses: ";
  cin >> meses;
  cout << "Dias: ";
  cin >> dias;
  int totalDias = idadeEmDias(anos, meses, dias);
  cout << "A idade em dias e aproximadamente: " << totalDias << endl;

  return 0;
}

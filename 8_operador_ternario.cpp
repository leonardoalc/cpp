#include <iostream>

using namespace std;

int main() {

    float n1, n2;
    float nota;
    string res;

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    nota = (n1+n2)/2;

    (nota >= 60) ? res="Aprovado" : res="Reprovado";

    cout << "\nSituacao do aluno: " << res << endl;
    cout << nota;

    return 0;
}
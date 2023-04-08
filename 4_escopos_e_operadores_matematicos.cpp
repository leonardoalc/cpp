#include <iostream>

using namespace std;

// variáveis globais
int n1, n2;

int main() {

    /*  
    Operadores matemáticos: 
        soma: +
        subtração: -
        divisão: /
        multiplicação: *
        mod (resto de divisão): %

        O parêntese também contará como um operador, dando precedência ao que estiver dentro dele.
    */
    int n3, n4 = 7, soma; // variáveis locais

    n1 = 11;
    n2 = 3;
    n3 = 5;
    soma = n1+n2+n3*n4;

    cout << "O resultado e: " << soma << endl;

    return 0;
}
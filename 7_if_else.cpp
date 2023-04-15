#include <iostream>
#include <cstdlib> // system

using namespace std;

int main() {

/*     int num = 10, num2 = 50;
    bool sol = false;
    char opc = 's';

    if(sol) {
        cout << "Vou ao cinema!";
    } else {
        cout << "Nao vou ao cinema!";
    }; */

    int n1, n2, res;
    char opc;

    inicio:
    system("cls");

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res=(n1+n2)/2;

    cout << "Total: " << res << endl;


    // >= 7 == Aprovado
    // >=4 e <=6 recuperação
    // <4 reprovado

    if(res >= 7) {
        cout << "Aprovado!";
    }else if(res >= 4 && res <= 6) {
        cout << "Recuperacao!";
    } else {
        cout << "Reprovado";
    }

    cout << "\nDeseja digitar mais notas? (s/n)";
    cin >> opc;

    // utilize aspas simples
    if(opc == 's' || opc == 'S') {
        goto inicio;
    }

    return 0;
}
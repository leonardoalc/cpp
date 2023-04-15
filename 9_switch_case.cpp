#include <iostream>

using namespace std;

int main() {

    int val;

    cout << "Selecione um cor: \n";
    cout << "[1, 2, 3] = verde, [4, 5, 6] = azul" << endl;
    cin >> val;

    switch(val) {
        case 1:
        case 2: 
        case 3:
            cout << "Cor selecionada: Verde"; 
            break;
        case 4:
        case 5:
        case 6:
            cout << "Cor selecionada: Azul"; 
            break;
        default:
            cout << "Valor selecionado invalido";
    }

    return 0;
}
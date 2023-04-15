#include <iostream>

using namespace std;

int main() {

    int cont;

    cont=21;


    // não será realizado
    while (cont <= 20)
    {
        cout << "Valor: " << cont << endl; 
        cont++;
    }
    

    do {
       cout << "Valor: " << cont << endl; 
       cont++;
    } while (cont <= 20);
    
    cout << "Valor: " << cont << endl;

    return 0;
}
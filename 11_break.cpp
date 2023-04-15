#include <iostream>

using namespace std;

int main() {

    int cont;

    cont = 0;

    while(cont <= 1000) {
        cout << cont << endl;
        cont++;

        if(cont == 543) {
            cout << cont << endl;
            break;
        }
    }

    return 0;
}
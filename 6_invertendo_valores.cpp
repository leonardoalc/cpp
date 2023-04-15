#include <iostream>

using namespace std;

int main() {

    int num = 10;

    cout << num << endl;

    // invertendo de forma tradicional
    // num = num * -1;

    num=-num;

    cout << num << endl;
    // o "-" não é uma string, o valor está invertido.    
    cout << -num;



    return 0;
}
#include <iostream>

using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) {
        return false; // SE FOR 1 OU MENOR QUE 1, NÃO É PRIMO
    }

    // VERIFICA SE TEM DIVISORES
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false; 
        }
    }

    return true; // SE N TEM É PRIMP
}

int main() {
    int num;


    cout << "DIGITE UM NUMERO: ";
    cin >> num;


    if (ehPrimo(num)) {
        cout << num << " É PRIMO" << endl;
    } else {
        cout << num << " NÃO É PRIMO" << endl;
    }

    return 0;
}

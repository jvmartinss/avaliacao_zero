#include <iostream>

using namespace std;

int main() {
    int numeros[5]; 
    int soma = 0;   // ACUMULA A SOMA DOS NÚMEROS

    for (int i = 0; i < 5; i++) {
        cout << "DIGITE O NÚMERO " << i + 1 << ": ";
        cin >> numeros[i];
        soma += numeros[i];
    }

    cout << "A SOMA É: " << soma << endl;

    return 0;
}

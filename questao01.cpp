#include <iostream>

using namespace std;

// FUNÇÃO PARA CALCULAR O FATORIAL
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // SE FOR 0 OU 1 RETORNA 1
    } else {
        return n * fatorial(n - 1); 
    }
}

int main() {
    int num;

    cout << "DIGITE UM INTEIRO: ";
    cin >> num;

    // SE FOR NEGATIVO MOSTRA MENSAGEM DE ERRO, SENÃO MOSTRA O FATORIAL
    if (num < 0) {
        cout << "NUMERO NEGATIVO" << endl;
    } else {
        int resultado = fatorial(num);
        cout << "FATORIAL DE " << num << " É " << resultado << endl;
    }

    return 0;
}
    
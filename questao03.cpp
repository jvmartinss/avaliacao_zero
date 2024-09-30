#include <iostream>
#include <string> // BIBLIOTECA PARA STRING

using namespace std;

int main() {
    string texto;

    cout << "DIGITE UMA STRING: ";
    getline(cin, texto); 

    cout << "A STRING POSSUI " << texto.length() << " CARACTERES." << endl;

    return 0;
}

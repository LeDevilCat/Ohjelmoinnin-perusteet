#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale (LC_ALL, "fi_FI.UTF-8");

    cout << "Ohjelma pyytää käyttäjältä kolmion sivujen pituuden ja tulostaa sen piirin." << endl;
    int sivu1, sivu2, sivu3;
    cout << "Syötä kolmion sivut välilyönnillä erotettuna: ";
    cin >> sivu1 >> sivu2 >> sivu3;

    int piiri = sivu1 + sivu2 + sivu3;
    cout << "Kolmion piiri on: " << piiri << endl;

}
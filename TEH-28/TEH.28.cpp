#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    int taulukko[9] = {7, 17, 37, 47, 67, 71, 73, 79, 97};

    cout << "Taulukon alkuperäinen sisältö: ";
    for (int i = 0; i < 9; i++) {
        cout << taulukko[i] << " ";
    }
    cout << endl;

    // Käännetään taulukko
    for (int i = 0; i < 9 / 2; i++) {
        int apu = taulukko[i];
        taulukko[i] = taulukko[8 - i];
        taulukko[8 - i] = apu;
    }

    cout << "Taulukon käännetty sisältö: ";
    for (int i = 0; i < 9; i++) {
        cout << taulukko[i] << " ";
    }
    cout << endl;

    return 0;
}

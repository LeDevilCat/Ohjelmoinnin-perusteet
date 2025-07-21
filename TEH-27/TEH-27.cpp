#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    int taulukko[26] = {41, 2, 73, 13, 3, 97, 17, 89, 29, 5, 31, 19, 79, 11, 23, 43, 47, 7, 53, 61, 67, 83, 59, 101, 37, 71};
    int pienin = taulukko[0];
    int suurin = taulukko[0];

    cout << "Taulukon sisältö on: ";
    for (int i = 0; i < 26; i++) {
        cout << taulukko[i];
        if (i < 25) cout << ", ";
    }
    cout << endl;

    for (int i = 1; i < 26; i++) {
        if (taulukko[i] < pienin) pienin = taulukko[i];
        if (taulukko[i] > suurin) suurin = taulukko[i];
    }

    cout << "Pienin arvo: " << pienin << endl;
    cout << "Suurin arvo: " << suurin << endl;

    return 0;
}
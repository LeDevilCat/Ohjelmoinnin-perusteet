#include <iostream>
#include <locale>
using namespace std;

int* varaaTaulukko(int koko) {
    int* taulukko = nullptr;
    if (koko > 0) {
        taulukko = new int[koko];
    }
    return taulukko;
}

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    int koko;
    cout << "Anna taulukon koko: ";
    cin >> koko;

    int* ptr = varaaTaulukko(koko);

    if (ptr == nullptr) {
        cout << "Muistin varaus epäonnistui tai koko oli 0." << endl;
        return 1;
    }

    for (int i = 0; i < koko; i++) {
        *(ptr + i) = i;
    }

    cout << "Taulukon sisältö on:" << endl;
    for (int i = 0; i < koko; i++) {
        cout << "Alkiolla " << i << " on arvo " << *(ptr + i) << endl;
    }

    delete[] ptr;
    ptr = nullptr;

    return 0;
}
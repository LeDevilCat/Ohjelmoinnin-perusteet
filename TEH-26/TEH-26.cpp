#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    int taulukko[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int summa = 0;

    cout << "Taulukon alkioiden ";
    for (int i = 0; i < 10; i++) {
        cout << taulukko[i];
        if (i < 9) cout << ", ";
        summa += taulukko[i];
    }
    cout << " summa on " << summa << "." << endl;

    return 0;
}
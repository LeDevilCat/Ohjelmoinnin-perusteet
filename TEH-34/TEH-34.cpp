#include <iostream>
#include <locale>
using namespace std;

// Tietue opiskelijalle
struct Opiskelija_ty {
    string nimi;
    int ika;
    int opintopisteet;
};

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    Opiskelija_ty opiskelijat[3] = {
        {"Tupu Ankka", 20, 45},
        {"Hupu Ankka", 22, 60},
        {"Lupu Ankka", 19, 30}
    };

    for (int i = 0; i < 3; i++) {
        cout << "Opiskelija: " << opiskelijat[i].nimi
             << ", ikä: " << opiskelijat[i].ika
             << ", opintopisteet: " << opiskelijat[i].opintopisteet << "." << endl;
    }

    return 0;
}
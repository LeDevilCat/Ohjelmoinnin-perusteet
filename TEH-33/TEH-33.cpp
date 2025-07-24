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

    Opiskelija_ty opiskelija;
    opiskelija.nimi = "Aino Opiskelija";
    opiskelija.ika = 22;
    opiskelija.opintopisteet = 60;

    cout << "Opiskelija: " << opiskelija.nimi
         << ", ikä: " << opiskelija.ika
         << ", opintopisteet: " << opiskelija.opintopisteet << "." << endl;

    return 0;
}
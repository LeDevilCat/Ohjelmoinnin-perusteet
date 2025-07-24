#include <iostream>
#include <locale>
#include <limits>
#include <string>
using namespace std;

struct Opiskelija_ty {
    string nimi;
    int ika;
    int opintopisteet;
};

// Aliohjelma, joka lukee opiskelijan tiedot ja palauttaa tietueen
Opiskelija_ty lueOpiskelijanTiedot() {
    Opiskelija_ty opiskelija;
    cout << "Syötä opiskelijan nimi: ";
    getline(cin, opiskelija.nimi);
    cout << "Syötä ikä: ";
    cin >> opiskelija.ika;
    cout << "Syötä opintopisteet: ";
    cin >> opiskelija.opintopisteet;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Poistaa rivinvaihdon syötteestä
    return opiskelija;
}

// Aliohjelma, joka tulostaa opiskelijan tiedot
void tulostaOpiskelija(const Opiskelija_ty &opiskelija) {
    cout << "Opiskelija: " << opiskelija.nimi
         << ", ikä: " << opiskelija.ika
         << ", opintopisteet: " << opiskelija.opintopisteet << "." << endl;
}

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    Opiskelija_ty opiskelija;
    opiskelija = lueOpiskelijanTiedot();
    tulostaOpiskelija(opiskelija);

    return 0;
}
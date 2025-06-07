#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    cout << "ohjelma kysyy sinulta kaksi kokonaislukua ja tekee niille peruslaskutoimitukset." << endl;

    cout << "Syötä ensimmäinen kokonaisluku: ";
    int luku1;
    cin >> luku1;
    cout << "Syötä toinen kokonaisluku: ";
    int luku2;
    cin >> luku2;

    int summa = luku1 + luku2;
    int erotus = luku1 - luku2;
    int tulo = luku1 * luku2;

    // Huom! Jos molemmat luvut ovat kokonaislukuja (int), jakolasku suoritetaan kokonaislukujen jakona,
    // jolloin tuloksesta tulee kokonaisluku (esim. 2/7 = 0). Vasta tämän jälkeen tulos muunnetaan double-tyyppiin.
    // Jos halutaan tarkka desimaalitulos, ainakin toinen luvuista pitää muuntaa doubleksi ennen jakoa:
    // double osamaaraa = (double)luku1 / luku2;
    double osamaaraa = luku1 / luku2;

    cout << "Lukujen summa on: " << summa << endl;
    cout << "Lukujen erotus on: " << erotus << endl;
    cout << "Lukujen tulo on: " << tulo << endl;
    cout << "Lukujen osamaara on: " << osamaaraa << endl;

    cout << "'/n'Ohjelma päättyy." << endl;
}
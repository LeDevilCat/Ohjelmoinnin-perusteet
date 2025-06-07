#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    cout << "Ohjema kysyy sinulta laatikon mitat." << endl;

    cout << "Syötä laatikon pituus: ";
    double pituus;
    cin >> pituus;

    cout << "Syötä laatikon leveys: ";
    double leveys;
    cin >> leveys;

    cout << "Syötä laatikon korkeus: ";
    double korkeus;
    cin >> korkeus;

    double tilavuus = pituus * leveys * korkeus;
    cout << "Laatikon tilavuus on: " << tilavuus << " kuutiota." << endl;

    cout << "Ohjelma päättyy." << endl;
    return 0;
}
#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    cout << "Ohjelma kysyy sinulta vuosien määrän ja laskee kuinka monta päivää niissä on." << endl;
    cout << "Ohjelma olettaa, että vuodessa on 365 päivää." << endl;
    cout << "Syötä vuosien määrä: ";
    
    int vuosia;
    cin >> vuosia;
    
    int paivia = vuosia * 365; // Yleisesti ottaen vuodessa on 365 päivää

    cout << "kun vuosia on " << vuosia << ", niin niissä on " << paivia << " päivää." << endl;

    cout << "'/n'Ohjelma päättyy." << endl;
    return 0;

}
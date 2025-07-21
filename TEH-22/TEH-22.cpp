#include <iostream>
#include <locale>
using namespace std;

void tervehdi(string etunimi, string sukunimi) {
    cout << "Tervehdys " << etunimi << " " << sukunimi << "!" << endl;
    cout << "Tervetuloa käyttämään tätä ohjelmaa!" << endl;
}

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");
    string etunimi, sukunimi;
    cout << "Syötä etunimesi: ";
    cin >> etunimi;
    cout << "Syötä sukunimesi: ";
    cin >> sukunimi;
    tervehdi(etunimi, sukunimi);
    return 0;
}
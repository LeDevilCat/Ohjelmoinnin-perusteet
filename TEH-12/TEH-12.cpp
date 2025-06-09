#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;

int main () {
    setlocale (LC_ALL, "fi_FI.UTF-8"); // Asetetaan paikaksi Suomi

    cout << "Montako kertaa haluat ostaa tuotteen jonka hinta on 19,90 e?" << endl;
    int count;
    cout << "Syötä ostojen määrä: ";
    cin >> count;
    double price = 19.90;
    double total = count * price;
    cout << fixed << setprecision(2); //säätää desimaalit kahteen
    cout << "Ostosten kokonaishinta on: " << total << " e" << endl;
    cout << "Kiitos ohjelman käytöstä!" << endl;

}
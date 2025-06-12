#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");
    cout << "syötä kuukauden numero (1-12): ";
    int month;
    cin >> month;
    cout << "syötä vuosiluku välin 0-2030: ";
    int year;
    cin >> year;

    // Tarkistetaan syötteet
    if (month < 1 || month > 12 || year < 0 || year > 2030) {
        cout << "Virheellinen syöte!" << endl;
        return 1;
    }

    // Selvitetään onko karkausvuosi
    bool karkaus = ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) );

    int paivia;
    switch (month) {
        case 2:
            paivia = karkaus ? 29 : 28;
            break;
        case 4: case 6: case 9: case 11:
            paivia = 30;
            break;
        default:
            paivia = 31;
    }

    cout << "Kuukaudessa " << month << "/" << year << " on " << paivia << " päivää." << endl;
    return 0;
}
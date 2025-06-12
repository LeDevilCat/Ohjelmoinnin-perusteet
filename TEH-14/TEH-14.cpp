#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");
    int num1, num2;
    cout << "Syötä ensimmäinen kokonaisluku: ";
    cin >> num1;
    cout << "Syötä toinen kokonaisluku: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "Ensimmäinen luku on suurempi kuin toinen luku." << endl;
    } else if (num1 < num2) {
        cout << "Ensimmäinen luku on pienempi kuin toinen luku." << endl;
    } else {
        cout << "Luvut ovat yhtä suuret." << endl;
    }
}
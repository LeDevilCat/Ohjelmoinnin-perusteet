#include <iostream>
#include <locale>
using namespace std;

// Aliohjelma, joka palauttaa true jos luku on alkuluku, muuten false
bool onkoAlkuluku(int luku) {
    if (luku < 2) return false;
    for (int i = 2; i < luku; i++) {
        if (luku % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");
    int luku;
    cout << "Anna luku: ";
    cin >> luku;

    if (onkoAlkuluku(luku)) {
        cout << "Luku " << luku << " on alkuluku." << endl;
    } else {
        cout << "Luku " << luku << " ei ole alkuluku." << endl;
    }
    
    return 0;
}

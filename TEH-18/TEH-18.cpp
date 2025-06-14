#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");
    cout << "Syötä numero joka on pienempi kuin 10: ";
    int number;
    cin >> number;
    while (number >= 10) {
        cout << "Virheellinen syöte! Syötä numero joka on pienempi kuin 10: ";
        cin >> number;
    }
    cout << "Syöttämäsi luku on pienempi kuin 10. Ohjelma sulkeutuu " << number << endl;
    {
        /* code */
    }
    
}
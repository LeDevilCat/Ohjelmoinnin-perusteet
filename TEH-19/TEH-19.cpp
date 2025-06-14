#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");
    cout << "Ohjelma tulostaa neliöjuuret väliltä 1–10:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << "Neliöjuuri " << i << " on " << sqrt(i) << endl;
    }
    cout << "Ohjelma päättyy." << endl;
    return 0;
    }
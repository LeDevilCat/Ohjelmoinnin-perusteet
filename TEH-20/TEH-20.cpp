#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");
    cout << "Ohjelma tulostaa ascii merkit koodeille 0–127:" << endl;
    for (int i = 0; i <= 127; ++i) {
        cout << "ASCII merkki " << i << " on '" << static_cast<char>(i) << "'" << endl;
    }  
    cout << "Ohjelma päättyy." << endl;
    return 0;
}
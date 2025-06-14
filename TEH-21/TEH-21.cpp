#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale(LC_ALL, "fi_FI.UTF-8");

    const int rivit = 10;

    // 1. Vasemmalle kasvava kolmio
    for (int i = 1; i <= rivit; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // 2. Vasemmalle laskeva kolmio
    for (int i = rivit; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // 3. Oikealle kasvava kolmio
    for (int i = 1; i <= rivit; i++) {
        for (int j = 1; j <= rivit - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // 4. Oikealle laskeva kolmio
    for (int i = rivit; i >= 1; i--) {
        for (int j = 1; j <= rivit - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
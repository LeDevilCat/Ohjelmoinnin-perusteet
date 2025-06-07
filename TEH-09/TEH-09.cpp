#include <iostream>
#include <locale>
using namespace std;

int main () {
    setlocale (LC_ALL, "fi_FI.UTF-8"); // Asetetaan paikaksi Suomi

    cout << "Ohjelma tulostaa 16-järjestelmän luvut A - F ja niiden desimaaliesitykset." << endl;

    int luku = 0xA;
    cout << "Lukua 0xA vastaa 10-järjestelmän luku " << luku << endl;
    luku = 0xB;
    cout << "Lukua 0xB vastaa 10-järjestelmän luku " << luku << endl;
    luku = 0xC;
    cout << "Lukua 0xC vastaa 10-järjestelmän luku " << luku << endl;
    luku = 0xD;
    cout << "Lukua 0xD vastaa 10-järjestelmän luku " << luku << endl;
    luku = 0xE;
    cout << "Lukua 0xE vastaa 10-järjestelmän luku " << luku << endl;
    luku = 0xF;
    cout << "Lukua 0xF vastaa 10-järjestelmän luku " << luku << endl;

    cout << "\nOhjelma päättyy." << endl;
    return 0;
}
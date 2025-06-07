#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main () {
    setlocale (LC_ALL, "fi_FI.UTF-8"); // Asetetaan paikaksi Suomi

    cout << "Ohjelma tulostaa kurssiaineistossa esitellyt muuttujien tyypit ja niiden koot." << endl;

    cout << '\n' << "Kokonaisluku muuttujat:" << endl;
    cout << "short int: " << sizeof(short int) << " tavua" << endl;
    cout << "unsigned short int: " << sizeof(unsigned short int) << " tavua" << endl;
    cout << "int: " << sizeof(int) << " tavua" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " tavua" << endl;
    cout << "long int: " << sizeof(long int) << " tavua" << endl;
    cout << "unsigned long int: " << sizeof(unsigned long int) << " tavua" << endl;
    cout << "long long int: " << sizeof(long long int) << " tavua" << endl;
    cout << "unsigned long long int: " << sizeof(unsigned long long int) << " tavua" << endl;

    cout << '\n' << "Kirjasin muuttujat:" << endl;
    cout << "char: " << sizeof(char) << " tavua" << endl;
    cout << "string: " << sizeof(string) << " tavua" << endl;
    cout << "bool: " << sizeof(bool) << " tavua" << endl;

    cout << '\n' << "Liukuluku muuttujat:" << endl;
    cout << "float: " << sizeof(float) << " tavua" << endl;
    cout << "double: " << sizeof(double) << " tavua" << endl;
    cout << "long double: " << sizeof(long double) << " tavua" << endl;

    cout << '\n' << "Ohjelma päättyy." << endl;
    return 0;
}